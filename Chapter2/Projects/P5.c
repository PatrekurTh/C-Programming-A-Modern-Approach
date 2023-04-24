/*
 * Name: P5.c
 * Purpose: Computes value of polynomial with user input x
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    float x, x5, x4, x3, x2, answer;

    printf("Let x = ");
    scanf("%f", &x);

    x2 = x * x;
    x3 = x2 * x;
    x4 = x3 * x;
    x5 = x4 * x;
    answer = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", answer);

    return 0;
}