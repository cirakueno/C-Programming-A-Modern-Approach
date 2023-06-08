#include <stdio.h>

int main(void)
{
    int hour_24, hour_12, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour_24, &minute);

    if(hour_24 > 12)
    {
        hour_12 = hour_24 - 12;
        printf("Equivalent 12-hour time: %d:%d PM\n", hour_12, minute);
    }
    else 
    {
        hour_12 = hour_24;
        printf("Equivalent 12-hour time: %d:%d AM\n", hour_12, minute);
    }

    return 0;
}