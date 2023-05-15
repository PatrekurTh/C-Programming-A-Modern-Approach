/*
 * Name: P8.c
 * Purpose: Prints the row sums and the column sums
 * Author: PatrekurTH
 */

#include <stdio.h>

#define N 5

int main(void)
{
    int i, j, total, lo, hi, grade, grades[N][N];

    for (i = 0; i < N; i++) {
        printf("Enter grades for student %d: ", i + 1);

        for (j = 0; j < N; j++)
            scanf("%d", &grades[i][j]);
    }

    printf("Student\tTotal\tAverage\n");
    for (i = 0; i < N; i++) {
        total = 0;

        for (j = 0; j < N; j++) {
            total += grades[i][j];
        }
        printf("%7d%6d%10.2f\n", i + 1, total, (float) total / N);
    }

    printf("\nQuiz\tAverage\tHigh\tLow\n");
    for (i = 0; i < N; i++) {
        lo = hi = grades[0][i];
        total = 0;

        for (j = 0; j < N; j++) {
            grade = grades[j][i];
            total += grade;
            if (grade < lo)
                lo = grade;
            else if (grade > hi)
                hi = grade;
        }
        printf("%4d%11.2f%5d%7d\n", i + 1, (float) total / N, hi, lo);
    }

    return 0;
}
