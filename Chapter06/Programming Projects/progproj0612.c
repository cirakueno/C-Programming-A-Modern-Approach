#include <stdio.h>

int main(void)
{
    int i, j, n;
    unsigned long long factorial = 1;
    long double sum = 1.0;
    long double epsilon;
    long double current_term;

    printf("Enter the lower limit for the current term: ");
    scanf("%Lf", &epsilon);

    i = 1;
    do
    {
        for(j=1; j<=i; j++)
            factorial = factorial * j;

        current_term = 1.0f/factorial;
        sum += 1.0f/factorial;
        factorial = 1;
        i++;
    } while(epsilon < current_term);

    printf("The sum of 1 + 1/1! + 1/2! + ... + 1/n! is %Lf\n", sum);

    return 0;
}

// The largest integer that we can enter for n seems to be 65, for values greater than that we get "inf" as a result.