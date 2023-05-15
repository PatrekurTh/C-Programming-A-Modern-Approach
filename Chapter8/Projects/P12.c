/*
 * Name: P12.c
 * Purpose: Computes the value of a word by summing the values of its letters
 * Author: PatrekurTH
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char ch;
    const char values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
        sum += values[toupper(ch) - 'A'];

    printf("Scrabble value: %d\n", sum);

    return 0;
}
