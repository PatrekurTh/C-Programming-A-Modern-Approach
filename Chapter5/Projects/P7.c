/*
 * Name: P7.c
 * Purpose: finds the largest and smallest of four integers entered by the user
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, largest, smallest, l1, l2, s1, s2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b > a) {
        l1 = b;
        s1 = a;
    } 
    else {
        l1 = a;
        s1 = b;
    }

    if (c > d) {
        l2 = c;
        s2 = d;
    }
    else {
        l2 = d;
        s2 = c;
    }

    if (l1 > l2)
        largest = l1;
    else
        largest = l2;

    if (s1 < s2)
        smallest = s1;
    else
        smallest = s2;


    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
