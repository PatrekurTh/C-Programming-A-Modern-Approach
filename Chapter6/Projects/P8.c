/*
 * Name: P8.c
 * Purpose: prints a one-month calendar
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int days, start, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (i = 1; i < start; i++)
        printf("   "); // digits + space

    for (i = 1; i <= days; i++, start++) {
        printf("%2d ", i);
        if (start == 7) {
            printf("\n");
            start = 0;
        }
    }

    printf("\n");

    return 0;
}
