/*
 * Name: P7.c
 * Purpose: Prints the row sums and the column sums
 * Author: PatrekurTH
 */

#include <stdio.h>

#define N 5

int main(void)
{
    int i, j, 
        col_totals[N] = {0}, 
        row_totals[N] = {0},
        numbers[N][N];

    for (i = 0; i < N; i++) {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < N; j++)
            scanf("%d", &numbers[i][j]);
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            row_totals[i] += numbers[i][j];
            col_totals[j] += numbers[i][j];
        }
    }

    printf("Row totals:");
    for (i = 0; i < N; i++)
        printf("%3d", row_totals[i]);

    printf("\nColumn totals:");
    for (i = 0; i < N; i++)
        printf("%3d", col_totals[i]);
    printf("\n");

    return 0;
}
