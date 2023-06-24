#include <stdio.h>

int main(void)
{
    int days_per_month, start_day;
    int i;

    printf("Enter number of days in month: ");
    scanf("%d", &days_per_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    // Initial spaces
    for(i = 1; i <= start_day-1; i++)
    {
        printf("    ");
    }

    // Entering the numbers:
    for(i = 1; i <= days_per_month; i++)
    {
        printf("%3d ", i);
        if((i+start_day-1) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}