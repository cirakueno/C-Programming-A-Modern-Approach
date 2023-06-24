#include <stdio.h>

int main(void)
{
    int i;

    for(i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    printf("\n");

    return 0;
}

/*
    The above is an infinte loop. The first couple of values produced from the loop are:
    10 5 3 2 1 1 1 1 1 1....
    The 1s will be repeated to infinity.
*/