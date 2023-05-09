/*
 * Name: P1.c
 * Purpose: Prints a table of squares using a for statement
 * Author: K. N. King, patrekurTH (modify)
 */

#include <stdio.h>

int main(void)
{
    int i, n;
    // short i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    // scanf("%hd", &n);

    for (i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);
        // printf("%10hd%10hd\n", i, i * i);

    return 0;
}
