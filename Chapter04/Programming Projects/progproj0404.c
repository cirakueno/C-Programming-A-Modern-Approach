#include <stdio.h>

int main(void)
{
    int number, number_copy;
    int n0, n1, n2, n3, n4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    number_copy = number;
    n0 = (number_copy % 8);
    number_copy = number_copy / 8;
    n1 = (number_copy % 8);
    number_copy = number_copy / 8;
    n2 = (number_copy % 8);
    number_copy = number_copy / 8;
    n3 = (number_copy % 8);
    number_copy = number_copy / 8;
    n4 = (number_copy % 8);

    printf("In octal, you number is: %d%d%d%d%d\n", n4, n3, n2, n1, n0);

    return 0;
}