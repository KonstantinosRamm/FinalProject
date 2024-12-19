#include "hangman.h"
#include "ascii.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> //for get opt function

/*  
    Starts the Hangman game and handles the game logic.This function could be placed inside the main function, 
    but it is separated to enhance clarity and simplify potential expansions to the game 
*/
void start_game();


int main(){

    //start hangman game
    start_game();
    return 0;
}

















//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
void start_game(){
    //init game stage
    int stage=stage_one;
    //buffer for the selected word
    char word[buffer_size]="";
    gen_rand_word(word);
    //store users input
    char usr[strlen(word)];
    //init users already tried letters
    int tried[alphabet_letters]; 
    for(int i = 0; i < alphabet_letters; i++){
        tried[i]= 0;
    }
    //set users first and last letters to those of the chosen word
    init_str(word,usr);
    while(1){
        clr_scr();
        //print the ascii based on current state
        check_stage(stage);
        printf("\n\n%s",usr);
        print_already_tried(tried);
        input(word,usr,tried,&stage);
        
        if(strcmp(word,usr)==0){
            clr_scr();
            check_stage(win);
            printf("\nThe word was: %s\n\n",word);
            exit(0);
        }
        //game over 
        if(stage >= game_over){
            clr_scr();//clear screen
            check_stage(game_over);
            exit(0);
            
        }

    }
}