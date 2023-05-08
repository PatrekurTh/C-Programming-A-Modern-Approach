#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
    /* get bytes (8 bits) on my machine */
    printf("%zd\n", sizeof (char));  // 1
    printf("%zd\n", sizeof (short)); // 2
    printf("%zd\n", sizeof (int));   // 4

    return 0;
}