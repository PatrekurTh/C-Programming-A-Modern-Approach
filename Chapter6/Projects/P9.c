/*
 * Name: P9.c
 * Purpose: Computes the remaining balance on a loan after the first, second, and third monthly payments
 * Author: PatrekurTH
 */

#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int payments, i;
    float loan, interest, monthly_payment, monthly_interest;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &payments);

    monthly_interest = (interest / 100.0) / MONTHS;

    for (i = 1; i <= payments; i++) {
        loan = (loan - monthly_payment) + (loan * monthly_interest);
        printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}