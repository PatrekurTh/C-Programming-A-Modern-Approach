/*
 * Name: P2.c
 * Purpose: asks the user for a 24-hour time, then displays the time in 12-hour form
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int hours, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &mins);

    printf("Equivalent 12-hour time: ");
    if (hours > 12) {
        printf("%d:%.2d PM\n", hours % 12, mins);
    }
    else if (hours == 12) {
        printf("%d:%.2d PM\n", hours, mins);
    }
    else {
        printf("%d:%.2d AM\n", hours, mins);
    }

    return 0;
}
