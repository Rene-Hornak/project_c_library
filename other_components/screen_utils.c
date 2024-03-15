// screen_utils.c

#include "screen_utils.h"
#include <stdio.h>

// Function to clear console
void clearScreen()
{
    // This escape character will clear the console.
    printf("\033[H\033[J");
}

// Function to wait for Enter, it needs to clear / flush buffer
void pressEnter()
{
    // Flush input buffer
    int wait;
    while ((wait = getchar()) != '\n' && wait != EOF) {}

    // wait for user to press enter
    printf("\t\t\tPress Enter to continue... ");
    getchar();
}