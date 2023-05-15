/*
 * Name: P1.c
 * Purpose: Checks numbers for repeated digits and prints them
 * Author: K. N. King, PatrekurTH (modify)
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool repeated[10] = {false}, digit_seen[10] = {false};
    int i, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            repeated[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s):");
    for (i = 0; i < 10; i++)
        if (repeated[i])
            printf(" %d", i);
    printf("\n");

    return 0;
}
