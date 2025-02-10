#include <stdio.h>

int main(void)
{
    int x, polynom;

    printf("Enter value of x: ");
    scanf("%d", &x);

    polynom = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7 * x - 6;

    printf("Value of polynom for x = %d is %d\n", x, polynom);

    return 0;
}