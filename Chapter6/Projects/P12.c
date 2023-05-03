/*
 * Name: P12.c
 * Purpose: Approximates e up to n
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n, i, fac;
    float term, epsilon, sum = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter epsilon (small float): ");
    scanf("%f", &epsilon);

    for (i = 1, fac = 1; i <= n; i++) {
        term = 1.0f / (fac *= i);
        if (term < epsilon)
            break;
        sum += term;
    }

        sum += 1.0f / (fac *= i);
    
    printf("e approximation: %f\n", sum);

    return 0;
}
