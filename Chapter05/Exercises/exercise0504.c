#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter value of i: ");
    scanf("%d", &i);
    printf("Enter value of j: ");
    scanf("%d", &j);

    printf("Result (-1 if i less than j, 0 if i equal to j, +1 if i greater than j): %d\n", (i > j) - (i < j));

    return 0;
}