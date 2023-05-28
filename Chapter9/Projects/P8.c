/*
 * Name: P8.c
 * Purpose: Simulates the game of craps
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    bool player_won;
    char again;

    srand((unsigned) time(NULL));

    do {
        player_won = play_game();

        if (player_won) {
            wins++;
            printf("You win!\n");
        } else {
            losses++;
            printf("You lose!\n");
        }

        printf("\nPlay again? ");
        scanf(" %c", &again);
        printf("\n");
    } while (toupper(again) == 'Y');

    printf("Wins: %d Losses: %d\n", wins, losses);

    return 0;
}

/* Generate two numbers between 1 and 6 inclusive and return their sum */
int roll_dice(void)
{
    int roll = 0;

    roll += (rand() % 6) + 1;
    roll += (rand() % 6) + 1;

    return roll;
}

/* Plays one craps game and return true if the player wins and false if the player loses */
bool play_game(void)
{
    int roll, point;

    roll = roll_dice();
    printf("You rolled: %d\n", roll);

    switch (roll) {
        case 7: case 11:
            return true;
        case 2: case 3: case 12:
            return false;
        default:
            printf("Your point is %d\n", point = roll);
    }

    for (;;) {
        printf("You rolled: %d\n", (roll = roll_dice()));

        if (roll == point)
            return true;
        if (roll == 7)
            return false;
    }
}
