/*
 * Name: P3.c
 * Purpose: reduces a fraction to lowest terms
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int num, denom, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    m = num;
    n = denom;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", num / m, denom / m);

    return 0;
}
