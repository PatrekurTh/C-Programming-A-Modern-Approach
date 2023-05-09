/*
 * Name: P12.c
 * Purpose: Evaluates an expression
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    char operator;
    float sum, op2;

    printf("Enter an expression: ");
    scanf(" %f", &sum);

    while ((operator = getchar()) != '\n') {
        if (operator == ' ')
            continue;

        scanf(" %f", &op2);
        switch (operator) {
            case '+':
                sum += op2; break;
            case '-':
                sum -= op2; break;
            case '*':
                sum *= op2; break;
            case '/':
                sum /= op2; break;
        }
    }

    printf("Value of expression: %.1f\n", sum);

    return 0;
}
