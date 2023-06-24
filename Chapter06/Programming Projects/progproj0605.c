#include <stdio.h>

int main(void)
{
    int number, digit; 

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");
    do
    {
        digit = number % 10;
        printf("%d", digit);
        number = number / 10;
    } while (number > 0);
    
    printf("\n");

    return 0;
}