/*
 * Name: P12.c
 * Purpose: Approximates e down to epsilon
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int i = 1, fac = 1;
    float epsilon, term, sum = 1.0f;

    printf("Enter epsilon (small float): ");
    scanf("%f", &epsilon);

    while ((term = 1.0f / (fac *= i++)) > epsilon)
        sum += term;

    printf("e approximation: %f\n", sum);

    return 0;
}
