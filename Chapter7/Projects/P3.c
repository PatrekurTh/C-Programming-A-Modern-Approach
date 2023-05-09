/*
 * Name: P3.c
 * Purpose: Sums a series of numbers (using long variables)
 * Author: K. N. King, PatrekurTH (modify)
 */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This program sums a series of integers.\n");

    printf("Enter integers (0.0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2f\n", sum);

    return 0;
}
