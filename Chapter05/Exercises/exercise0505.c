#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    if(n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    return 0;
}

/*
    The if statement is legal but it does not produce the result exptected from the printf statement.
    The (n >= 1) is evaluated first and the result of that is either a 0 or 1. The next part is
    (either 0 or 1) <= 10 which will always be true. So, the printf statement will always be executed
    no matter what value we give to n.
*/