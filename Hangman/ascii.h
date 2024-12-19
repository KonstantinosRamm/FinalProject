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

void check_stage(int state);//print current state with ascii

#endif //ASCII_H