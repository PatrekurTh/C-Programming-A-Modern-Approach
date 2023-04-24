/*
 * Name: P6.c
 * Purpose: Computes value of polynomial with user input x
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    float x, answer;

    printf("Let x = ");
    scanf("%f", &x);

    answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", answer);

    return 0;
}