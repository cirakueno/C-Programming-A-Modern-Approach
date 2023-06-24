#include <stdio.h>

int main(void)
{
    int i;

    // (a)
    i = 10;
    while(i < 10)
    {
        printf("i = %d\n\n", i);
        i--;
    }

    // (b)
    i = 10;
    for(;;)
    {
        printf("i = %d\n\n", i);
        i--;
    }

    // (c)
    i = 10;
    do
    {
        printf("i = %d\n\n", i);
        i--;
    } while (i < 10);

    return 0;
    
}

/*
    The one that has a different behavior from the rest is (c). That is because in (c) the body of the loop will be executed at least once
    and then the condition will be evaluated. In the above examples (a) and (b) won't execute at all while (c) will be an infinte loop, because first time
    through the body the value of i will be decremented and the condition will always be true.
*/