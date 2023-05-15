/*
 * Name: P11.c
 * Purpose: Displays the last name, a comma, and the first initial, followed by a period
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