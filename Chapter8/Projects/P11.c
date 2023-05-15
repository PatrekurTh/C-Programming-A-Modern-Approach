/*
 * Name: P11.c
 * Purpose: Translates an alphabetic phone number into numeric form
 * Author: PatrekurTH
 */

#include <stdio.h>

#define MAX_NUM 15

int main(void)
{
    int i;
    char ch, number[MAX_NUM];

    printf("Enter phone number: ");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        number[i] = ch;

    printf("In numeric form: ");
    for (i = 0; i < MAX_NUM; i++) {
        switch (number[i]) {
            case 'A': case 'B': case 'C':
                putchar('2'); break;
            case 'D': case 'E': case 'F':
                putchar('3'); break;
            case 'G': case 'H': case 'I':
                putchar('4'); break;
            case 'J': case 'K': case 'L':
                putchar('5'); break;
            case 'M': case 'N': case 'O':
                putchar('6'); break;
            case 'P': case 'R': case 'S':
                putchar('7'); break;
            case 'T': case 'U': case 'V':
                putchar('8'); break;
            case 'W': case 'X': case 'Y':
                putchar('9'); break;
            default:
                putchar(number[i]);
        }
    }
    printf("\n");

    return 0;
}
