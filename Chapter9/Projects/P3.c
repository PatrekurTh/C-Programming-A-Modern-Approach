/*
 * Name: P3.c
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

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char board[N][N];

    generate_random_walk(board);
    print_array(board);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    int row, col, move, x = 0, y = 0;
    char letter;

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            walk[row][col] = '.';
        }
    }

    srand((unsigned) time(NULL));

    for (letter = 'A'; letter <= 'Z'; letter++) {
        if (0 <= x && x < N &&
            0 <= y && y < N &&
            walk[x][y] == '.')
            walk[x][y] = letter;
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
}

void print_array(char walk[10][10])
{
    int row, col;

    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++)
            printf("%2c", walk[row][col]);
        printf("\n");
    }
}