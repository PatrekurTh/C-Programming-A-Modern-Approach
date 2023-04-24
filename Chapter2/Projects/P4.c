/*
 * Name: P4.c
 * Purpose: Add 5% tax to user input amount
 * Author: PatrekurTH
 */

#include <stdio.h>
#define TAX 1.05f

int main(void)
{
    float amount, with_tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    with_tax = amount * TAX;
    printf("With tax added: $%.2f\n", with_tax);

    return 0;
}