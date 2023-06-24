#include <stdio.h>

int main(void)
{
    float loan_amount, remaining_balance, interest_rate, monthly_payment;
    int num_payments;
    int i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    remaining_balance = loan_amount;
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    for(i=1; i<=num_payments; i++)
    {
        remaining_balance = remaining_balance - monthly_payment + remaining_balance * (interest_rate / 100)/12;
        printf("Balance remaining after payment #%d: $%.2f\n", i, remaining_balance);
    }

    return 0;
}