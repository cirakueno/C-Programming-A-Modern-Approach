#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int max_num, min_num;
    int max1, max2, min1, min2;
    
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    // Make the comparisons two by two. For each pair find the smallest and largest numbers:
    if(num1 < num2)
    {
        max1 = num2;
        min1 = num1;
    }
    else
    {
        max1 = num1;
        min1 = num2;
    }

    if(num3 < num4)
    {
        max2 = num4;
        min2 = num3;
    }
    else
    {
        max2 = num3;
        min2 = num4;
    }

    // Compare the largest numbers and smallest numbers (produced by each pair) to find the global smallest and largest:
    if(max1 < max2)
        max_num = max2;
    else 
        max_num = max1;

    if(min1 < min2)
        min_num = min1;
    else
        min_num = min2;


    printf("Smallest: %d\n", min_num);
    printf("Largest: %d\n", max_num);

    return 0;
}