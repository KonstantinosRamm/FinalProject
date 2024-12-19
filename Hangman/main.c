#include "hangman.h"
#include "ascii.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> //for get opt function

void start_game();


int main(){
    int stage=stage_one;
    char word[buffer_size]="";//buffer for the selected word
    gen_rand_word(word);
    char usr[strlen(word)];//store the word that the user found
    init_str(word,usr);
    while(1){
        clr_scr();//clear screen
        check_stage(stage);//print the ascii 
        printf("\n\n%s",usr);//print the word with the entered letters
        input(word,usr,&stage);

        if(strcmp(word,usr)==0){//if user finds the correct word
            clr_scr();
            check_stage(win);
            printf("\nThe word was: %s\n\n",word);
            exit(0);
        }
        //user inserted many wrong letters
        if(stage >= game_over){
            clr_scr();//clear screen
            check_stage(game_over);
            exit(0);
            
        }

    }

    return 0;
}