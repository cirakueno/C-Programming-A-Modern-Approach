#include <stdio.h>

int main(void)
{
    int x, polynomial;

    printf("Enter value of x (integer): ");
    scanf("%d", &x);

    polynomial = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("Value of polynomial is: %d\n", polynomial);

    return 0;
}