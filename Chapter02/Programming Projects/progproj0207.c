#include <stdio.h>

int main(void)
{
    int dollar_amount, twenties, tens, fives, ones;
    int variable_dollar;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    variable_dollar = dollar_amount;

    twenties = variable_dollar / 20;
    variable_dollar = variable_dollar - 20 * twenties;
    tens = variable_dollar / 10;
    variable_dollar = variable_dollar - 10 * tens;
    fives = variable_dollar / 5;
    variable_dollar = variable_dollar - 5 * fives;
    ones = variable_dollar;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);

    return 0;
}