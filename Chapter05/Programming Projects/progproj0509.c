#include <stdio.h>

int main(void)
{
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if(year1 < year2)
        printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    else if(year1 > year2)
        printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    else
    {
        if(month1 < month2)
            printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
        else if(month1 > month2)
            printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
        else
        {
            if(day1 < day2)
                printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
            else if(day1 > day2)
                printf("%d/%d/%.2d comes earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
            else
                printf("The dates are the same!");
        }
    }

    printf("\n");

    return 0;
}