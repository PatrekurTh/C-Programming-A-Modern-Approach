/*
 * Name: P6.c
 * Purpose: Prints the values of various sizeof values
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    printf("Size of int (bytes): %zu\n", sizeof(int));
    printf("Size of short (bytes): %zu\n", sizeof(short));
    printf("Size of long (bytes): %zu\n", sizeof(long));
    printf("Size of float (bytes): %zu\n", sizeof(float));
    printf("Size of double (bytes): %zu\n", sizeof(double));
    printf("Size of long double (bytes): %zu\n", sizeof(long double));

    return 0;
}