
#ifndef HANGMAN_H
#define HANGMAN_H

#define buffer_size 64 
#define alphabet_letters 26
#define screen 80



void init_str(const char src[buffer_size],char user[buffer_size]);//initialize the users word;
void input(const char src[buffer_size],char user[buffer_size],int *stage);//user input and validation of letters
int gen_rand_word(char str[buffer_size]);//pick a random word from file
void clr_scr();//clear the screen
int check_win(const char src[buffer_size],const char user[buffer_size]);//check if the user wins
int already_inputed(char ch,char already_tried[alphabet_letters]);


#endif //HANGMAN_H