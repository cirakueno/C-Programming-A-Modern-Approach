#include <stdio.h>

int main(void)
{
    int i, j;

    // (a)
    i = 2;
    j = 2;
    i += j;
    printf("i = %d, j = %d\n\n", i, j);

    // (b)
    i--;
    printf("i = %d, j = %d\n\n", i, j);

    // (c)
    i * j / i;
    printf("i = %d, j = %d\n\n", i, j);

    // (d)
    i % ++j;
    printf("i = %d, j = %d\n\n", i, j);

    return 0;
}

/*
    i = 4, j = 2

    i = 3, j = 2

    i = 3, j = 2

    i = 3, j = 3
*/