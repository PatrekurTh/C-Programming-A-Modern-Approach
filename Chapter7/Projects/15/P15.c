/*
 * Name: P15.c
 * Purpose: Computes the factorial of a positive integer
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int i, n, fac;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (fac = 1, i = 1; i <= n; i++)
        fac *= i;

    printf("Factorial of %d: %d\n", n, fac);

    return 0;
}
