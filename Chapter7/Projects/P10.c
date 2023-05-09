/*
 * Name: P10.c
 * Purpose: Counts the number of vowels in a sentence
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowels = 0;
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++; break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}
