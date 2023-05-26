/*
 * Name: P1.c
 * Purpose: Sorts integers using selection sort
 * Author: PatrekurTH
 */

#include <stdio.h>

#define N 10
#define SIZE (int) (sizeof(a) / sizeof(a[0]))

void selection_sort (int a[], int s);

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);

    selection_sort(a, SIZE);

    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void selection_sort (int a[], int s)
{
    if (s <= 0)
        return;

    int i, tmp, max = 0;

    for (i = 0; i < s; i++)
        if (a[i] > a[max])
            max = i;
    
    tmp = a[s - 1];
    a[s - 1] = max;
    a[max] = tmp;

    selection_sort(a, s - 1);
}