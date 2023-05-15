/*
 * Name: P2.c
 * Purpose: Counts occurence of digits
 * Author: K. N. King, PatrekurTH (modify)
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, digit, digit_count[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (i = 0; i < 10; i++)
        printf("%3d", i);
    printf("\n");

    printf("Occurrences:");
    for (i = 0; i < 10; i++)
        printf("%3d", digit_count[i]);
    printf("\n");

    return 0;
}
