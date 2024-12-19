

#include "ascii.h"
#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------------------------------------------
/*
    draw hanger ascii based on the mistakes he user made
*/
void check_stage(int state) {
    switch (state) {
        case stage_one:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;

        case stage_two:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|          |  ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;
        
        case stage_three:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|        / |  ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;
        
        case stage_four:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|        / | \\");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;
        
        case stage_five:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|        / | \\ ");
            printf("\n\t|         /   ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;

        case stage_six:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|        / | \\ ");
            printf("\n\t|         / \\ ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t|             ");
            printf("\n\t==============");
            printf("\n\n");
            break;

        

        case last_chance:
            printf("\n\t+----------+  ");
            printf("\n\t|          |  ");
            printf("\n\t|          O  ");
            printf("\n\t|        / | \\ ");
            printf("\n\t|         / \\ ");
            printf("\n\t|             ");
            printf("\n\t|            ");
            printf("\n\t|        /|||\\");
            printf("\n\t==============");
            printf("\n\n");
            break;



        case win:
        printf("\n _  _  _____  __  __    _    _  ____  _  _ ");  
        printf("\n( \\/ )(  _  )(  )(  )  ( \\/\\/ )(_  _)( \\( )");  
        printf("\n \\  /  )(_)(  )(__)(    )    (  _)(_  )  ( ");  
        printf("\n (__) (_____)(______)  (__/\\__)(____)(_)\\_)");  
        break;



        default:
    printf("\n            __    _____  ___  ____ ");
    printf("\n           (  )  (  _  )/ __)( ___)");
    printf("\n            )(__  )(_)( \\__ \\ )__) ");
    printf("\n           (____)(_____)(___/(____)");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\n           (  .      )");            
    printf("\n       )           (              )");
    printf("\n             .  '   .   '  .  '  .");
    printf("\n    (    , )       (.   )  (   ',    )");
    printf("\n     .' ) ( . )    ,  ( ,     )   ( .");
    printf("\n  ). , ( .   (  ) ( , ')  .' (  ,    )");
    printf("\n (_,) . ), ) _) _,')  (, ) '. )  ,. (' )");
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
            
    }
}

