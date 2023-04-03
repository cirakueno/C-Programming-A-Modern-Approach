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
    printf("Alternative Check digit: %d\n\n\n", 10 - (total % 10)); // Alternative computation (which is wrong)

    /*
        The second method is not equivalent to the first one.
        Let us take total = 40 as an example:
            I.  9 - ((40 - 1) % 10) = 9 - (39 % 10) = 9 - 9 = 0
            II. 10 - (40 % 10) = 10 - 0 = 10
        The results are different. This happens with all multiples of 10. The second method will always give 10 if total
        is a multiple of 10. While the first method will give 0.
        We can also tell it is wrong because the second method can give the number 10 as answer, while the first method
        always from 0 to 9. 
    */

   // Let us compare the two results with a for loop:
    for(total = 1; total <= 100; total ++)
    {   
        printf("Total: %d\n", total);
        printf("Check digit: %d\n", 9 - ((total - 1) % 10));
        printf("Alternative Check digit: %d\n", 10 - (total % 10)); // Alternative computation
        printf("Counter: %d\n\n\n", counter);
        if((9 - ((total - 1) % 10)) != (10 - (total % 10)))
            counter++;
        printf("\n\n");
    }

    printf("Counter = %d\n", counter);

    return 0;
}