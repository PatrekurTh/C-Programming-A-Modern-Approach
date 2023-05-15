/*
 * Name: P9.c
 * Purpose: Generates a “random walk” across a 10 × 10 array
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MOVES 4
#define LEFT 0
#define UP 1
#define RIGHT 2
#define DOWN 3

int main(void)
{
    int row, col, move, x = 0, y = 0;
    char letter, board[N][N];

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            board[row][col] = '.';
        }
    }

    srand((unsigned) time(NULL));

    for (letter = 'A'; letter <= 'Z'; letter++) {
        if (0 <= x && x < N &&
            0 <= y && y < N &&
            board[x][y] == '.')
            board[x][y] = letter;
        else
            break;

        move = rand() % MOVES;

        switch (move) {
            case UP:
                y--; break;
            case DOWN:
                y++; break;
            case RIGHT:
                x++; break;
            case LEFT:
                x--; break;
        }
    }

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++)
            printf("%2c", board[row][col]);
        printf("\n");
    }

    return 0;
}
