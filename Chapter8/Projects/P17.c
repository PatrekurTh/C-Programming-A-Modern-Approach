/*
 * Name: P17.c
 * Purpose: Prints an n × n magic square
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n, num, row, col, limit, x, y;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    y = 0;
    x = n / 2;
    limit = n * n;
    int magic_square[n][n];

    for (row = 0; row < n; row++)
        for (col = 0; col < n; col++)
            magic_square[row][col] = 0;

    for (num = 1; num <= limit; num++) {
        magic_square[y][x] = num;
        y = (n + (y - 1)) % n;     // move up 1
        x = (x + 1) % n;           // move right 1
        if (magic_square[y][x] != 0) {
            y = (y + 2) % n;       // move down 2
            x = (n + (x - 1)) % n; // move left 1
        }
    }

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++)
            printf("%3d", magic_square[row][col]);
        printf("\n");
    }

    return 0;
}