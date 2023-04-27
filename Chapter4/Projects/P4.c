/*
 * Name: P4.c
 * Purpose: reads an integer entered by the user and displays it in octal
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int dec, oct;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &dec);

    oct = dec % 8;
    dec /= 8;
    oct += 10 * (dec % 8);
    dec /= 8;
    oct += 100 * (dec % 8);
    dec /= 8;
    oct += 1000 * (dec % 8);
    dec /= 8;
    oct += 10000 * (dec % 8);

    printf("In octal, your number is: %.5d\n", oct);

    return 0;
}