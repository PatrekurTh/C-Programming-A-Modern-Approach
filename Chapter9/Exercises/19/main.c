#include <stdio.h>

void pb(int n)
{
 if (n != 0) {
 pb(n / 2);
 putchar('0' + n % 2);
 }
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output: ");
    pb(n);
    printf("\n");

    return 0;
}