/*
 * Name: P1.c
 * Purpose: asks the user to enter a three-digit number, then prints the number with its digits reversed
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d\n", n % 10, (n / 10) % 10, n / 100);

    return 0;
}