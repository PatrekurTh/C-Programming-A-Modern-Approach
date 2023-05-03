/*
 * Name: P5.c
 * Purpose: asks the user to enter a two-digit number, then prints the number with its digits reversed
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n > 0);

    printf("\n");

    return 0;
}
