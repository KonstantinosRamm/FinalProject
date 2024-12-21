#include "hangman.h"
#include "ascii.h"
#include "validation.h"
#include "info.h"
#include "ansi.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>



/*  
    Starts the Hangman game and handles the game logic.This code could be placed inside the main function instead of a function, 
    but it is separated to enhance clarity and simplify potential expansions to the game 
*/
void start_game();
void color_options();


int main(){

    //start hangman game
    while(1){
        system("clear");
        printf("----------Welcome to Hangman game!----------\n");
        printf("Choose one of the options below\n");
        printf("1) INFO\n");
        printf("2) PLAY\n");
        printf("3) OPTIONS\n");
        printf("4) EXIT\n");
        printf("Option: ");
        int option = get_user_opt();
        switch(option){

            //game information
            case info:
                clr_scr();
                about_game();
                break;

            //initiate new game
            case play_game:

                start_game();
                break;

            //options
            case options:
                color_options();
                clr_scr();

                break;

            case quit:
                exit(0);
                break;
                
            //handle exit option and invalid inputs
            default:
                exit(-1);//exit with error code 
                system("exit");
        }
        printf("\n");
    }

    
    
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
            //wait for 3 seconds and return user to main menu
            sleep(3);
            clr_scr();
            return;
        }
        //game over 
        if(stage >= game_over){
            clr_scr();//clear screen
            check_stage(game_over);
            printf("\nThe word was: %s\n\n",word);
            //wait for 3 seconds and return user to main menu
            sleep(3);
            clr_scr();
            return;
            
        }

    }
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
void color_options(){
    clr_scr();
    printf("Change colors:\n");
    printf("1)Foreground\n");
    printf("2)Background\n");
    printf("3)Revert Colors\n");
    printf("4)Cancel\n");
    printf("Option: ");
    int color_option = get_user_opt();
    switch (color_option){
        //change foreground color
        case 1:
            clr_scr();
            change_FOREGROUND();
        break;
        case 2:
        break;
        case 3:
        break;
        default:
        return;
    }
}