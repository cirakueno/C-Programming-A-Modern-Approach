#include <stdio.h>

int main(void)
{
    int twenty_bills, ten_bills, five_bills, one_bills, amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty_bills = amount / 20;
    ten_bills = (amount - twenty_bills * 20) / 10;
    five_bills = (amount - twenty_bills * 20 - ten_bills * 10) / 5;
    one_bills = amount - twenty_bills * 20 - ten_bills * 10 - five_bills * 5;

    printf("\n");
    printf("$20 bills: %d\n", twenty_bills);
    printf("$10 bills: %d\n", ten_bills);
    printf(" $5 bills: %d\n", five_bills);
    printf(" $1 bills: %d\n", one_bills);

    return 0;
}