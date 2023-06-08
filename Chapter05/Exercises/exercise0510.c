#include <stdio.h>

int main(void)
{
    int i;

    i = 1;
    switch(i % 3)
    {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

    printf("\n");

    return 0;
}

/*
    The result will be: onetwo
    That is because the result of i % 3 is 1 when i = 1. So the switch statement will go to "case 1:"
    But because there are not break; statements then the flow will continue through "case 2:" as well
    and execute the statements there as well.
*/