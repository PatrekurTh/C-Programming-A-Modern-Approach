/*
 * Name: P14.c
 * Purpose: Compute the square root of a positive floating-point number
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <math.h>

#define PROD .00001

int main(void)
{
    double x, y = 1.0, xy;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(xy = x/y, fabs(xy - y) > y * PROD)
        y = (xy + y) / 2;

    printf("Square root: %.5f\n", y);

    return 0;
}