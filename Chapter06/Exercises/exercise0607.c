#include <stdio.h>

int main(void)
{
    int i;

    printf("Do...while loop: ");
    i = 9384;
    do 
    {
        printf("%d ", i);
        i /= 10;
    } while(i > 0);

    printf("\n");
    printf("For loop: ");
    for(i = 9384; i > 0; i /= 10)
        printf("%d ", i);

    printf("\n");

    return 0;
}

/*
    Output:
        Do...while loop: 9384 938 93 9 
        For loop: 9384 938 93 9 
*/