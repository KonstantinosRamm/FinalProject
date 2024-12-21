#include "info.h"
#include <stdio.h>

void about_game(){
    FILE * info = fopen("info/info.txt","r");
    //ensure file opened
    if(!info){
        printf("Error opening file info.txt.The file might be corrupted or missing");
        return;
    }
    printf("\n\n\n");
    //print text from info to terminal
    char ch;
    while((ch = fgetc(info)) != EOF){
        putchar(ch);
    }

    fclose(info);

    //prompt user to exit when he finishes
    printf("\n\npress enter to return: ");


    //consume all remaining chars
    while ((ch = getchar()) != '\n' && ch != EOF){
        continue;
    }
    


}