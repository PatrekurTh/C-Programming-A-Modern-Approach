/*
 * Name: P11.c
 * Purpose: Counts the number of vowels in a sentence
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{   
    char c, first;

    printf("Enter a first and last name: ");

    while ((first = getchar()) == ' ') ;

    while (getchar() != ' ') ;

    while ((c = getchar()) != '\n') {
        if (c == ' ')
            continue;
        putchar(c);
    }
    printf(", %c.\n", first);

    return 0;
}