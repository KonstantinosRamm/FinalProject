#include "info.h"
#include <stdio.h>

void about_game() {
    FILE *info = fopen("info/info.txt", "r");
    // Ensure file opened
    if (!info) {
        printf("Error opening file info.txt. The file might be corrupted or missing.\n");
        return;
    }

    printf("\n\n\n");
    // Print text from info to terminal
    char ch;
    while ((ch = fgetc(info)) != EOF) {
        putchar(ch);
    }

    // Close the file to free resources
    fclose(info);

    // Prompt user to exit when they finish
    printf("\n\nPress enter to return: ");

    // Consume all remaining characters until newline
    while ((ch = getchar()) != '\n' && ch != EOF) {
        // Consume and discard remaining input
    }
}
