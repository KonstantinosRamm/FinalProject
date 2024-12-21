#ifndef MENU_H
#define MENU_H
#define input_buffer 10

enum options{
    info = 1,
    play_game,
    options,
    quit
};

//create a cli menu to handle the game and the available options 
int get_user_opt();

#endif //MENU_H