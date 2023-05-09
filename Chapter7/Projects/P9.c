/*
 * Name: P9.c
 * Purpose: Asks for time in 12 hour format then displays in 24 hour format
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours, mins;
    char am_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hours, &mins, &am_pm);

    hours = (hours % 12) + (toupper(am_pm) == 'A' ? 0 : 12);

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, mins);

    return 0;
}
