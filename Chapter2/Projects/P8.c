/*
 * Name: P8.c
 * Purpose: Computes the remaining balance on a loan after the first, second, and third monthly payments
 * Author: PatrekurTH
 */

#include <stdio.h>
#define MONTHS 12

int main(void)
{
    float loan, interest, monthly_payment, monthly_interest;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest = (interest / 100.0) / MONTHS;
    loan = (loan - monthly_payment) + (loan * monthly_interest);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = (loan - monthly_payment) + (loan * monthly_interest);
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan = (loan - monthly_payment) + (loan * monthly_interest);
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}