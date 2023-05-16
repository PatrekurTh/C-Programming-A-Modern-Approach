/*
 * Name: P16.c
 * Purpose: Tests whether two words are anagrams
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <ctype.h>

#define BUFFER 80
#define LETTERS 26

int main(void)
{
    int i, alpha[LETTERS] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            alpha[tolower(ch) - 'a']++;

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            alpha[tolower(ch) - 'a']--;

    for (i = 0; i < LETTERS; i++)
        if (alpha[i] != 0)
            break;

    if (i < LETTERS - 1)
        printf("The words are not anagrams.\n");
    else
        printf("The words are anagrams.\n");

    return 0;
}