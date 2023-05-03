/*
 * Name: P2.c
 * Purpose: prompt user for two integers, calculates and displays their greatest common divisor (GCD)
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
