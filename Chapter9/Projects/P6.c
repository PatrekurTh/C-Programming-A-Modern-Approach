/*
 * Name: P6.c
 * Purpose: Solves the polynomial 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
 * Author: PatrekurTH
 */

#include <stdio.h>

int polynomial(int x);

int main(void)
{
    int x;

    printf("Enter a value for x: ");
    scanf(" %d", &x);

    printf("The result is: %d\n", polynomial(x));

    return 0;
}

int polynomial(int x)
{
    return 3 * x * x * x * x * x
            + 2 * x * x * x * x
            - 5 * x * x * x
            - x * x
            + 7 * x
            - 6;
}