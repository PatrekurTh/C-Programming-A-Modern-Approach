/*
 * Name: P1.c
 * Purpose: accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

    return 0;
}