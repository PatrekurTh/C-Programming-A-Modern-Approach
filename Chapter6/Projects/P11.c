/*
 * Name: P11.c
 * Purpose: Approximates e up to n
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n, i, fac;
    float sum = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1, fac = 1; i <= n; i++)
        sum += 1.0f / (fac *= i);
    
    printf("e approximation: %f\n", sum);

    return 0;
}
