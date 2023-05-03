/*
 * Name: P6.c
 * Purpose: prints all even squares between 1 and n
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++) {
        if ((i * i) % 2 == 0)
            printf("%d\n", i * i);
    }

    return 0;
}
