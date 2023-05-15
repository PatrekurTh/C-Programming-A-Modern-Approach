/*
 * Name: P6.c
 * Purpose: Translates input into B1FF-speak:
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <ctype.h>

#define BUFFER 100

int main(void)
{
    int j = 0, i = 0;
    char c, message[BUFFER] = {0};

    printf("Enter message: ");
    while ((c = getchar()) != '\n')
        message[i++] = c;

    printf("In B1FF-speak: ");
    while (j < i) {
        switch (toupper(message[j])) {
            case 'A':
                putchar('4'); break;
            case 'B':
                putchar('8'); break;
            case 'E':
                putchar('3'); break;
            case 'I':
                putchar('1'); break;
            case 'O':
                putchar('0'); break;
            case 'S':
                putchar('5'); break;
            default:
                putchar(toupper(message[j])); break;
        }
        j++;
    }
    printf("!!!!!!!!!!\n");

    return 0;
}