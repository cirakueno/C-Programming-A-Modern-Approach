#include <stdio.h>

int main(void)
{
    float num, largest_num;

    printf("Enter a number: ");
    scanf("%f", &num);
    largest_num = num;

    while(num > 0)
    {
        if(largest_num < num)
            largest_num = num;
        
        printf("Enter a number: ");
        scanf("%f", &num);
    }

    printf("The largest number entered was %f\n", largest_num);

    return 0;
}