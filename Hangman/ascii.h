#ifndef ASCII_H
#define ASCII_H

enum state{
    win,
    stage_one,
    stage_two,
    stage_three,
    stage_four,
    stage_five,
    stage_six,
    last_chance,
    game_over
};
//determine the correct ascii to print based on the current state of the game
void check_stage(int state);
#endif //ASCII_H