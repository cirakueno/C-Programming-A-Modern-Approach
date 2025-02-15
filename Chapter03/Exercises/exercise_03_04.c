#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    printf("scanf has the following format: scanf(\"%%d%%f%%d\", &i, &x, &j);\n");
    printf("Enter the following \"10.3 5 6\": ");
    scanf("%d%f%d", &i, &x, &j);
    printf("Values after: i = %d, j = %d, x = %f\n", i, j, x);

    return 0;
}

/*
    Output:
        Values after: i = 10, j = 5, x = 0.300000
*/

// scanf will read the input "10."" and will see that the "." cannot be part of the %d so it puts the value of 10 to "i" and starts reading the next value. The next input sequence is .3, scanf
// sees that the placeholder is %f and assigns the .3 value to x. The next input is 5 which scanf assigns to j. The last value of 6 is left for the next call of scanf.