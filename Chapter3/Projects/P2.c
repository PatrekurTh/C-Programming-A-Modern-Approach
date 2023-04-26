/*
 * Name: P2.c
 * Purpose: formats product information entered by the user
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int item_no, date_d, date_m, date_y;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_no);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &date_m, &date_d, &date_y);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-.4d\n", item_no, unit_price, date_m, date_d, date_y);

    return 0;
}
