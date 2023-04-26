/*
 * Name: P5.c
 * Purpose: asks the user to enter the numbers from l to 16 (in any order) and then  displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("%2d %2d %2d %2d\n", a, b, c, d);
    printf("%2d %2d %2d %2d\n", e, f, g, h);
    printf("%2d %2d %2d %2d\n", i, j, k, l);
    printf("%2d %2d %2d %2d\n\n", m, n, o, p);

    printf("Row sums: %d %d %d %d\n",
            a + b + c + d, 
            e + f + g + h, 
            i + j + k + l, 
            m + n + o + p
            );
    printf("Column sums: %d %d %d %d\n",
            a + e + i + m,
            b + f + j + n,
            c + g + k + o,
            d + h + l + p
            );
    printf("Diagonal sums:  %d %d\n",
            a + f + k + p,
            m + j + g + d
            );

    return 0;
}

