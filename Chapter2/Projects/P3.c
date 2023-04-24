/* 
 * Name: P2.c
 * Purpose: Computes the volume of a sphere with a user input-meter radius
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <math.h>
#define FRAC (4.0f / 3.0f)

int main(void)
{
    int rad;
    float v;

    printf("Radius (m): ");
    scanf("%d", &rad);

    v = FRAC * M_PI * rad * rad * rad;
    printf("Volume of sphere: %.2f\n", v);

    return 0;
}