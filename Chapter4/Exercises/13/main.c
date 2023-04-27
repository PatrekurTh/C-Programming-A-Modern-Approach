#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 5;
    j = ++i;
    i = 5;
    k = i += 1;

    printf("j : %d k : %d\n", j, k); // j : 6 k : 6

    return 0;
}