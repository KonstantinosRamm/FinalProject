#ifndef VALIDATION_H
#define VALIDATION_H
#define input_buffer 10

enum options{
    info = 1,
    play_game,
    options,
    quit
};

//for user validation 
int get_user_opt();

#endif //VALIDATION_H