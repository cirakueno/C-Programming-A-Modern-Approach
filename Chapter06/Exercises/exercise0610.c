#include <stdio.h>

int main(void)
{
    int i;

    i = 10;
    while(i >= 0)
    {
        i--;
        if(i % 2 == 0 || i < 0)
            continue;
        printf("%d ", i);

        
    }

    printf("\n\n");
    i = 10;
    while(i >= 0)
    {
        i--;
        if(i % 2 == 0 || i < 0)
            goto end_loop;
        printf("%d ", i);

        end_loop: ;
    }

    printf("\n");

    return 0;
    
}