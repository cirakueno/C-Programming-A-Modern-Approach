#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, first_payment, second_payment, third_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    first_payment = loan_amount - monthly_payment + loan_amount * 6.0f / 100.0f / 12.0f;
    second_payment = first_payment - monthly_payment + first_payment * 6.0f / 100.0f / 12.0f;
    third_payment = second_payment - monthly_payment + second_payment* 6.0f / 100.0f / 12.0f;

    printf("\nBalance remaining after first payment: $%.2f\n", first_payment);
    printf("Balance remaining after second payment: $%.2f\n", second_payment);
    printf("Balance remaining after third payment: $%.2f\n", third_payment);

    return 0;
}