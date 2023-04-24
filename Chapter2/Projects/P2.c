/* 
 * Name: P2.c
 * Purpose: Computes the volume of a sphere with a 10-meter radius
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <math.h>
#define FRAC (4.0f / 3.0f) // 4 / 3 results in 1 because of truncation 

int main(void)
{
    int radius = 10;
    float v;

    v = FRAC * M_PI * radius * radius * radius;
    printf("Volume of sphere: %.2f\n", v);

    return 0;
}