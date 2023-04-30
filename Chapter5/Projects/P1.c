/*
 * Name: P1.c
 * Purpose: calculates how many digits a number contains
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n, digits;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0 && n < 10) {
        digits = 1;
    }
    else if (n < 100) {
        digits = 2;
    }
    else if (n < 1000) {
        digits = 3;
    }
    else {
        digits = 4; // You may assume that the number has no more than four digits.
    }

    printf("The number %d has %d digits\n", n, digits);

    return 0;
}