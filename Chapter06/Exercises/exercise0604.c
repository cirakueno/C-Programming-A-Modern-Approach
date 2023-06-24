#include <stdio.h>

int main(void)
{
    int i;

    // (a):
    for(i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n");

    // (b):
    for(i = 0; i < 10; ++i)
        printf("%d ", i);

    printf("\n");

    // (c):
    for(i = 0; i++ < 10; )
        printf("%d ", i);

    printf("\n");

    return 0;
}

/*
    The one that is different from the rest is (c) because the condition i < 10 is evaluated and i is immediately increased.
    While in the other cases the condition i < 10 is evaluated and the body of the loop is executed and then the value of i is increased.
*/