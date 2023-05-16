/*
 * Name: P14.c
 * Purpose: Reverses the words in a sentence
 * Author: PatrekurTH
 */

#include <stdio.h>

#define BUFFER 100

int main(void)
{
    int i, j, word = 0;
    char ch, sentence[BUFFER];

    printf("Enter a sentence: ");
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        if (ch == '!' || ch == '?' || ch == '.')
            break;
        sentence[i] = ch;
    }

    printf("Reversal of sentence:");
    for (i-- ; i >= 0; i--) {
        if (sentence[i] == ' ' || i == 0) {
            if (i == 0)
                putchar(' ');
            for (j = 0; j <= word; j++)
                putchar(sentence[i + j]);
            word = 0;
        } else {
            word++;
        }
    }
    printf("%c\n", ch);

    return 0;
}