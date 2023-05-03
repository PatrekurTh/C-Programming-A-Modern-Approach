/*
 * Name: P9.c
 * Purpose: asks the user to enter two dates and then indicates which date comes earlier on the calendar
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int d1, m1, y1, m2, d2, y2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    d2 = d1;
    m2 = m1;
    y2 = y1;

    while (d1 != 0 && m1 != 0 && y1 != 0) {
        if (y1 < y2 ||
            !(y1 > y2) && m1 < m2 ||
            !(m1 > m2) && d1 < d2) {
                d2 = d1;
                m2 = m1;
                y2 = y1;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m1, &d1, &y1);
    }

    printf("%d/%d/%.2d is the earliest date\n", m2, d2, y2);

    return 0;
}
