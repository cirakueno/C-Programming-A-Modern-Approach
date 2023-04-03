/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    int counter = 0;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    printf("Alternative Check digit: %d\n", (10 - (total % 10)) % 10); // Alternative computation

    // Let us compare the two results with a for loop:
    for(total = 1; total <= 100; total ++)
    {
        printf("Check digit: %d\n", 9 - ((total - 1) % 10));
        printf("Alternative Check digit: %d\n", (10 - (total % 10)) % 10); // Alternative computation
        if((9 - ((total - 1) % 10)) != ((10 - (total % 10)) % 10))
            counter++;
        printf("\n\n");
    }

    printf("Counter = %d\n", counter);

    // We can see no difference between the two approaches so we can conclude that they are the same.

    return 0;
}