#include <stdio.h>

int main(void)
{
    int i, sum;

    sum = 0;
    for(i = 0; i < 10; i++)
    {
        if(i % 2)
            continue;
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}

/*
    The above program will sum the even numbers less than 10 and greater than 0. The condition inside the if statement will be 1, meaning True, if
    i is an odd number. In that case the rest of the loop is skipped. If i is even number the condition is False and the sum += 1
    statement is executed.
*/