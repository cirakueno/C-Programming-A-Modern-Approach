#include <stdio.h>

int main(void)
{
    int i, j;

    // (a)
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n\n", i, j);

    // (b)
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n\n", i, j);

    // (c)
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n\n", i, j);

    // (d)
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n\n", i, j);

    return 0;
}

/*
    6 16

    6 -7

    6 23

    6 15
*/