/*
 * Name: P15.c
 * Purpose: Reverses the words in a sentence
 * Author: PatrekurTH
 */

#include <stdio.h>

#define MESSAGE_LENGTH 80

int main(void)
{
    char ch, message[MESSAGE_LENGTH];
    int i, shift;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        message[i] = ch;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];
        if ('a' <= ch && ch <= 'z')
            ch = ((ch - 'a') + shift) % 26 + 'a';
        else if ('A' <= ch && ch <= 'Z')
            ch = ((ch - 'A') + shift) % 26 + 'A';
        putchar(ch);
    }
    printf("\n");

    return 0;
}