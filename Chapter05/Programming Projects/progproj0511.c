#include <stdio.h>

int main(void)
{
    int number;
    int ones_digit, tens_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    ones_digit = number % 10;
    tens_digit = number / 10;

    printf("You entered the number ");
    if(number <= 19)
    {
        switch(number)
        {
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
    }
    else
    {
        switch(tens_digit)
        {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("fourty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }
        printf("-");
        switch(ones_digit)
        {
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
        }
    }
    

    printf("\n");

    return 0;
}