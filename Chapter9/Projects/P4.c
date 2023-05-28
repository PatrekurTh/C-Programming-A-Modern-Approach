/*
 * Name: P4.c
 * Purpose: Tests whether two words are anagrams
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define BUFFER 80
#define LETTERS 26

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int w1[26] = {0}, w2[26] = {0};

    read_word(w1);
    read_word(w2);

    if (equal_array(w1, w2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26])
{
    char ch;

    printf("Enter word: ");
    while ((ch = getchar()) != '\n')
        if (isalpha(ch))
            counts[tolower(ch) - 'a']++;
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;

    for (i = 0; i < LETTERS; i++)
        if (counts1[i] != counts2[i])
            return false;
    return true;
}