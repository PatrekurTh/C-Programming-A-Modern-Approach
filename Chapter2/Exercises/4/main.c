/*
 *  Write a program that declares several int and float variables-without initializing them-and then prints their values.
 */
#include <stdio.h>

int main(void)
{
    int x, y, z;
    float a, b, c;

    printf("x: %d y: %d z: %d\n", x, y, z);
    printf("a: %f b: %f c: %f\n", a, b, c);

    return 0;
}

/*
 * Is there any pattern to the values? (Usually there isn't.)
    After 5 runs:
    a: seems to toggle between positive and negative 0.0
    c: stays 0.0
 */