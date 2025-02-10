#include <stdio.h>

int main(void)
{
    int x, polynom;

    printf("Enter value of x: ");
    scanf("%d", &x);

    polynom = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Value of polynom for x = %d is %d\n", x, polynom);

    return 0;
}