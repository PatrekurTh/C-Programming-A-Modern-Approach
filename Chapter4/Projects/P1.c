/*
 * Name: P1.c
 * Purpose: asks the user to enter a two-digit number, then prints the number with its digits reversed
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d\n", n % 10, n / 10);

    return 0;
}
