/*
 * Name: P13.c
 * Purpose: Displays the last name, a comma, and the first initial, followed by a period
 * Author: PatrekurTH
 */

#include <stdio.h>

#define NAME_L 20

int main(void)
{   
    int i, j;
    char c, first, l_name[NAME_L];

    printf("Enter a first and last name: ");

    while ((first = getchar()) == ' ')
        ;

    while (getchar() != ' ')
        ;

    for (i = 0; (c = getchar()) != '\n'; i++)
        l_name[i] = c;

    printf("You entered the name: ");
    for (j = 0; j < i; j++)
        putchar(l_name[j]);
    printf(", %c.\n", first);

    return 0;
}