#include <stdio.h>

int main(void)
{
    float dollar_amount;

    printf("Enter an amount: ");
    scanf("%f", &dollar_amount);

    printf("With tax added: $%.2f\n", (dollar_amount * 1.05));

    return 0;
}