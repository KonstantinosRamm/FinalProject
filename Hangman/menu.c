#include "menu.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int get_user_opt(){

    int option;
    int last_option = quit;
    int valid = 1;
    //read users input from stdin to in_buffer
    char in_buffer[input_buffer];
    
    //while loop is used for error validation
    while (1){
        valid = 1;
        system("clear");
        printf("----------Welcome to Hangman game!----------\n");
        printf("Choose one of the options below\n");
        printf("1) INFO\n");
        printf("2) PLAY\n");
        printf("3) OPTIONS\n");
        printf("4) EXIT\n");
        printf("Option: ");

        //invalid input
        if(!fgets(in_buffer,sizeof(in_buffer),stdin)){
            system("clear");
            printf("You should enter an option that is represented by a positive integer: ");
            valid = 0;
            continue;
        }
        //remove new line character
        in_buffer[strcspn(in_buffer,"\n")] = '\0';

        //check buffer size (not nesssecary since it managed by fgets but i just wwant to be pedantic)
        if (strlen(in_buffer) >= input_buffer - 1){
            printf("Error: Input too long");
            valid = 0;
            continue;
        }

        //check if all characters are digits
        for(int i = 0; i < strlen(in_buffer); i++){
            if (!isdigit(in_buffer[i])){
                valid = 0;
            }
        }

        //if input is valid convert to int
        if(valid){
            option = atoi(in_buffer);
            break;
        }

    }
    return option;

}