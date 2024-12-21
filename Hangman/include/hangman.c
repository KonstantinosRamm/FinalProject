#include "hangman.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


/*
   pick a random word from file             
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
            printf("Make sure your word does not exceed 64 characters\n");
            exit(EXIT_FAILURE);
        }
        ctr++;
    }
    //place the cursor a the beggining of the file and read random word
    rewind(file);
        potition =rand() %ctr;

    //pick word based on random index
    for(i = 0; i <= potition; i++){
        fscanf(file,"%s",word);
    }
    strncpy(str, word, buffer_size);
    //ensure string is null terminated
    str[buffer_size-1] = '\0';

    fclose(file);
    return 1;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
    initialize the usr string with first and last letter of the word (as a hint)
*/
void init_str(const char src[buffer_size],char user[buffer_size]){
    int i = 0;
    int len = strlen(src);
    for(i = 0; i < len;i++){
        if(i==0 || i == strlen(src)-1){
            user[i]=src[i];
        }
        else{
            user[i]='_';
        }
    }
    //add terminating char to user string
    user[i]='\0';
}



//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
    Processes user input for the Hangman game, including validation and state updates.
*/

void input(const char src[buffer_size],char user[buffer_size],int already_tried_by_user[alphabet_letters],int *stage){
    char c;
    int correct = 0;//determine if correct letter found or not
    printf("\nEnter a character or characters : ");
    //scanf("%c",&c);
    while((c = getchar()) != '\n' && c != EOF){
    correct=0;
        //ignore non alphabetical charaacters
        if (!isalpha(c)){
            continue;
        }
        //make a loop to find the correct potition on the array
        for(int i = 0; i < strlen(src);i++){
            //tolower to add case insensitivity in character comparisons 
            if(tolower(c)==tolower(src[i])){
                user[i]=c;
                correct=1;
                
                
            }
        }
        //if users input didnt match any character then increment stage(reduce life)
        if(!correct){
                //check if character entered before
                if(!already_tried(c,already_tried_by_user)){
                    (*stage)++;
                }
        }


        //update tried characters
        already_tried_by_user[tolower(c)-'a'] = 1;

        
        //check if the characters entered by the user match the word (for multiple characters at once)
        if (strcmp(src,user)==0){
            return;
        }
    }
    return ;

}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
        clear the screen and redraw the the new state of the game
        Since i decided to make the game linux based i can use clear command
*/

void clr_scr(){
    system("clear");   
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//check characters already tried
int already_tried(char ch,int already_tried_by_user[alphabet_letters]){  
    return already_tried_by_user[tolower(ch)-'a'] == 1;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//print already tried characters
void print_already_tried(int already_tried_by_user[alphabet_letters]){
    printf("\nalready tried characters: ");
    for(int i = 0; i < alphabet_letters; i++){
        //encode back to character
        if(already_tried_by_user[i]){
            printf("%c",i+'a');
        }
    }
    printf("\n");
}




