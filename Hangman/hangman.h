
#ifndef HANGMAN_H
#define HANGMAN_H

#define buffer_size 64 
#define alphabet_letters 26



void init_str(const char src[buffer_size],char user[buffer_size]);//initialize the users word;
void input(const char src[buffer_size],char user[buffer_size],int already_tried[alphabet_letters],int *stage);//user input and validation of letters
int gen_rand_word(char str[buffer_size]);//pick a random word from file
void clr_scr();//clear the screen
int check_win(const char src[buffer_size],const char user[buffer_size]);//check if the user wins
int already_tried(char ch,int already_tried_by_user[alphabet_letters]);//check if alreaty tried characters
void print_already_tried(int already_tried_by_user[alphabet_letters]);//print letters already entered(as a reminder)


#endif //HANGMAN_H