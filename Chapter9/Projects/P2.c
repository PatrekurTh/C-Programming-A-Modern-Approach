/*
 * Name: P2.c
 * Purpose: asks the user to enter the amount of taxable income, then displays the tax due
 * Author: PatrekurTH
 */

#include <stdio.h>

float income_tax(float income);

int main(void)
{
    float income;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax due: %.2f\n", income_tax(income));

    return 0;
}

float income_tax(float income)
{
    float tax;

    if (income <= 750.00f)
        tax = .01f * income;
    else if (income <= 2250.00f)
        tax = 7.50f + .02f * (income - 750.00f);
    else if (income <= 3750.00f)
        tax = 37.50f + .03f * (income - 2250.00f);
    else if (income <= 5250.00f)
        tax = 82.50f + .04 * (income - 3750.00f);
    else if (income <= 7000.00f)
        tax = 142.50f + .05 * (income - 5250.00f);
    else
        tax = 230.00f + .06 * (income - 7000.00f);

    return tax;
}
