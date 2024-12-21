#include "ansi.h"
#include "validation.h"
#include <stdio.h>

//this stack overflow post might be usefull for the text manipulation i did https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences

void change_FOREGROUND(){
    int option;
    printf("Pick one of the colors below: \n");
    printf("1)Black: \n");
    printf("2)Red: \n");
    printf("3)Green: \n");
    printf("4)Yellow: \n");
    printf("5)Blue: \n");
    printf("6)Cyan: \n");
    printf("7)White: \n");   
    printf("8)Exit \n");
    printf("Option: ");      
    option = get_user_opt();

    switch (option){
        //black text
        case 1:
        printf("\033[30m");
        break;

        //Red text
        case 2:
        printf("\033[31m");
        break;

        //Green text
        case 3:
        printf("\033[32m");
        break;

        //Yellow text
        case 4:
        printf("\033[33m");
        break;

        //blue text
        case 5:
        printf("\033[34m");
        break;

        //Cyan text
        case 6:
        printf("\033[36m");
        break;

        //white text
        case 7:
        printf("\033[37m");
        break;

        //cancel
        default:
        return;
    }
      
}

//revert all colors 
void revert(){
    printf("\033[0m");
}
    