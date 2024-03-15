/*

        Adventure game in C

    This is text-based adventure game.
    It is used linked list for rooms to connect them.

*/

// standard input-output as scanf(), printf(), ...
#include <stdio.h>
// This stdlib library is here for exit() function.
#include <stdlib.h>
// Created local library screen_utils to create code more clean
#include "other_components/screen_utils.h"
// Created local libray gameplay to create game functions
#include "gameplay/gameplay.h"

// Maximum number of iterations to escape infinte loop.
const int MAX_ITERATION = 100;

int main() 
{   
    // Loop control variable.
    int iteration = 0;

    // Loop condition with iteration limit to avoid infinite loop.
    while (iteration < MAX_ITERATION)
    {
        mainMenu();
        iteration++;
    }   

    return 0;
}
