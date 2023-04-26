/*
 * Name: P3.c
 * Purpose: breaks down an ISBN entered by the user
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int GS1, id, publisher, item_no, check_d;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &id, &publisher, &item_no, &check_d);

    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check_d);

    return 0;
}