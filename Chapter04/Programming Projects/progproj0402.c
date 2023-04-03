#include <stdio.h>

int main(void)
{
    int num;
    int ones, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    ones = (num % 100) % 10; // Will hold the one's digit. Alternatively: ones = (n / 10) % 10,
    tens = (num % 100) / 10; // Will hold the ten's digit. Or simply: tens = num % 10;
    hundreds = num / 100;    // Will hold the hundred's digit

    printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

    return 0;
}