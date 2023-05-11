/*
 * Name: P13.c
 * Purpose: Calculates the average word length for a sentence
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int word_len = 0, words = 1; // prevent division by 0
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ')
            words++;
        else
            word_len++;
    }

    printf("Average word length: %.1f\n", (float) word_len / words);

    return 0;
}
