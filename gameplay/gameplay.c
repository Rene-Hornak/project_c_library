// gameplay.c

#include "gameplay.h"
#include <stdio.h>
#include <stdlib.h>

// Main menu with choices what to enter
void mainMenu()
{
    char choice;

    clearScreen();

    printf("\t\t\t--- ADVENTURE GAME ---\n");
    printf("\t\t\t    Start Game [S]    \n");
    printf("\t\t\t       Credit  [C]    \n");
    printf("\t\t\t        Quit   [Q]    \n");

    printf("\n");
    printf("\t\t\tEnter... ");
    // The enter inside scanf(" %c") 
    // is there because then the space an "\n" character
    // are not consumed and are not in bufer.
    // This way it does not end-up in next iteration 
    // for example the "\n" character or anything else.
    scanf(" %c", &choice);

    switch (choice)
    {
        case 'S':
        case 's':
            game();
            break;
    
        case 'C':
        case 'c':
            credit();
            // mainMenu(); DO NOT USE
            // dont use recursive call. More Safe code without them. 
            break;
   
        case 'Q':
        case 'q':
            printf("You have exit the game.\n");
            exit(0);
            break;
   
        default:
            printf("Error: Wrong choice entered!\n");
            break;
    }
}

// Function game, main mechanics
void game()
{
    printf("Game");
}

// Credit information about developement
void credit()
{
    clearScreen();

    printf("\n\t\t\tCreated by Rene Hornak\n\n");
    
    pressEnter();
}
