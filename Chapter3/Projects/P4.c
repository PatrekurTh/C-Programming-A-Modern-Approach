/*
 * Name: P4.c
 * Purpose: prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int area, first, last;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &first, &last);

    printf("You entered %d.%d.%d\n", area, first, last);

    return 0;
}