#include <stdio.h>

int main(void)
{
    int i;

    printf("While loop: ");
    i = 1;
    while(i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }

    printf("\n");
    printf("For loop: ");
    for(i = 1; i <= 128; i *= 2)
        printf("%d ", i);

    printf("\n");

    return 0;
}

/*
    Output:
        While loop: 1 2 4 8 16 32 64 128 
        For loop: 1 2 4 8 16 32 64 128
*/