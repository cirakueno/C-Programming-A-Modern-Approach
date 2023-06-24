#include <stdio.h>

int main(void)
{
    int i, j, n;
    unsigned long long factorial = 1;
    long double sum = 1.0;

    printf("Enter the last number (n): ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            factorial = factorial * j;

        sum += 1.0f/factorial;
        factorial = 1;
    }

    printf("The sum of 1 + 1/1! + 1/2! + ... + 1/n! is %Lf\n", sum);

    return 0;
}

// The largest integer that we can enter for n seems to be 65, for values greater than that we get "inf" as a result.