/*
 * Name: P1.c
 * Purpose: display the largest nonnegative number entered by the user
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    float n, largest;

    printf("Enter a number: ");
    scanf("%f", &n);

    while (n > 0.0f) {
        if (n > largest)
            largest = n;
        
        printf("Enter a number: ");
        scanf("%f", &n);
    }

    printf("\nThe largest number entered was %.2f\n", largest);

    return 0;
}
