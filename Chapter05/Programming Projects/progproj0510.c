#include <stdio.h>

int main(void)
{
    int grade, tens_digit;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    tens_digit = grade / 10;

    printf("Letter grade: ");
    switch(tens_digit)
    {
        case 10:
        case 9: 
                printf("A");
                break;
        case 8:
                printf("B");
                break;
        case 7:
                printf("C");
                break;
        case 6:
                printf("D");
                break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
                printf("F");
                break;
        default:
                printf("Error! Invalid grade!");
                break;
    }

    printf("\n");

    return 0;
}