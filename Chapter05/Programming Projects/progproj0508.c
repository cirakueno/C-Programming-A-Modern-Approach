#include <stdio.h>

int main(void)
{
    int hour, minute;
    int since_midnight_minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    since_midnight_minutes = hour * 60 + minute;
    
    if(since_midnight_minutes <= 8 * 60)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if(since_midnight_minutes <= (9 * 60 + 43))
    {
        if((since_midnight_minutes - 8 * 60) < (9 * 60 + 43 - since_midnight_minutes))
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
        else
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if(since_midnight_minutes <= (11 * 60 + 19))
    {
        if((since_midnight_minutes - (9 * 60 + 43)) < (11 * 60 + 19 - since_midnight_minutes))
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
        else
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if(since_midnight_minutes <= (12 * 60 + 47))
    {
        if((since_midnight_minutes - (11 * 60 + 19)) < (12 * 60 + 47 - since_midnight_minutes))
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
        else
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if(since_midnight_minutes <= (14 * 60))
    {
        if((since_midnight_minutes - (12 * 60 + 47)) < (14 * 60 - since_midnight_minutes))
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
        else
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if(since_midnight_minutes <= (15 * 60 + 45))
    {
        if((since_midnight_minutes - (14 * 60)) < (15 * 60 + 45 - since_midnight_minutes))
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
        else
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if(since_midnight_minutes <= (19 * 60))
    {
        if((since_midnight_minutes - (15 * 60 + 45)) < (19 * 60 - since_midnight_minutes))
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
        else
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else if(since_midnight_minutes <= (21 * 60 + 45))
    {
        if((since_midnight_minutes - (15 * 60 + 45)) < (21 * 60 + 45 - since_midnight_minutes))
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
        else
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }

    printf("\n");

    return 0;
}