#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n\n", k);

    // (b)
    i = 5; j = 10; k = 1;
    printf("%d\n\n", k > i < j);

    // (c)
    i = 3; j = 2; k = 1;
    printf("%d\n\n", i < j == j < k);

    // (d)
    i = 3; j = 4; k = 5;
    printf("%d\n\n", i % j + i < k);

    return 0;
}

/*
    1

    1

    1

    0
*/