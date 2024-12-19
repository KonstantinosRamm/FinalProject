#include "hangman.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/*
    generate random word that is read from a file              
*/


int gen_rand_word(char str[buffer_size]){
    char word[buffer_size] = "";
    int i = 0;
    int ctr=1;//set ctr to 1 to avoid float point error 
    int potition;
    srand(time(NULL));//seed randomizer
    FILE * file = NULL;
    
    
    //open file 
    file = fopen("words.txt","r");
    if(!file){
        perror("error while opening the file:");
        exit(0);
    }
    while (fscanf(file, "%s", word) == 1) {
        //validate that the word is not bigger than the size of the buffer
        if(strlen(word) >= buffer_size-1){
            printf("The word you inserted is to big...\n");
            exit(EXIT_FAILURE);
        }
        ctr++;
    }
    rewind(file);//place the cursor at the start again
        potition =+ rand() %ctr;//choose a random index to read the word

    for(i = 0; i <= potition; i++){
        fscanf(file,"%s",word);
    }
    strncpy(str, word, buffer_size);

    fclose(file);
    return 1;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
    initialize the usr string 
    */
void init_str(const char src[buffer_size],char user[buffer_size]){
    int i = 0;
    for(i = 0; i < strlen(src);i++){
        if(i==0 || i == strlen(src)-1){
            user[i]=src[i];
        }
        else{
            user[i]='_';
        }
    }
    user[i]='\0';//place the terminating character in the end
}



//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
    this function takes 2 string arguments. the first is the word to be found which is set as a constant. 
    the second is the string in which the user enters letters ... In each round the user enters a character
     or characters and an iterration starts for the current character from the input stream and the src .
    in case the character is found at least once inside the string then the corrrect variable evaluates to 
    true.by default the correct variable is false and if its still false after the end of the loop the value
    of stage increases which is used to count the remaing attempts to find the word
*/

void input(const char src[buffer_size],char user[buffer_size],int *stage){
    char c;
    int correct = 0;//determine if correct letter found or not
    printf("\nEnter a character or characters : ");
    //scanf("%c",&c);
    while((c = getchar()) != '\n' && c != EOF){
    correct=0;
    

        //make a loop to find the correct potition on the array
        for(int i = 0; i < strlen(src);i++){
            if(c==src[i]){
                user[i]=c;
                correct=1;
                
                
            }
        }
        //if the current character didnt match with any of the src string then the 
        if(correct==0){
            (*stage)++;
            
        }
        //if the correct word is found break the itteration even if more characters inside the input stream
        if (strcmp(src,user)==0){
            return;
        }
    }
    return ;

}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
        make a crlear screen function that acts like clearing the screen.In reality it prints new line characters in the screen
*/

void clr_scr(){
    for(int i = 0; i < screen;i++){
        printf("\n");
    }
}


