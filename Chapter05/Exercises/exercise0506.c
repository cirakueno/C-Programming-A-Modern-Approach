#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    if(n == 1-10)
        printf("n is between 1 and 10\n");

    return 0;
}

/*
    The if statement is legal however it does not produce what is stated in the printf statement.
    The expression inside the if is executed as follows:
    First (1-10) is evaluated which is -9. Then n == -9 is evaluated which is true only when n is 
    equal to -9. For any other value of n the program will terminate without printing anything. 
    When n is -9 the string inside the printf is printed.
*/