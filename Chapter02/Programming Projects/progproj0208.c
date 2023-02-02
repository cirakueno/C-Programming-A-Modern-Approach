#include <stdio.h>

int main(void)
{
    float loan_amount, remaining_balance, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    remaining_balance = loan_amount;
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    remaining_balance = remaining_balance - monthly_payment + remaining_balance * (interest_rate / 100)/12;
    printf("Balance remaining after first payment: $%.2f\n", remaining_balance);
    remaining_balance = remaining_balance - monthly_payment + remaining_balance * (interest_rate / 100)/12;
    printf("Balance remaining after second payment: $%.2f\n", remaining_balance);
    remaining_balance = remaining_balance - monthly_payment + remaining_balance * (interest_rate / 100)/12;
    printf("Balance remaining after third payment: $%.2f\n", remaining_balance);

    return 0;
}