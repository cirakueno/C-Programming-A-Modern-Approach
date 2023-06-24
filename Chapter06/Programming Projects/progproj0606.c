#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Enter upper limit for the even square: ");
    scanf("%d", &n);

    for(i = 1; i * i <= n; i++)
    {
        if(i % 2 == 0)
            printf("%d\n", i * i);
    }

    return 0;
}