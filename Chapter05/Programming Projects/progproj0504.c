#include <stdio.h>

int main(void)
{
    float wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if(wind_speed < 1)
        printf("Calm");
    else if(wind_speed <= 3)
        printf("Light air");
    else if(wind_speed <= 27)
        printf("Breeze");
    else if(wind_speed <= 47)
        printf("Gale");
    else if(wind_speed <= 63)
        printf("Storm");
    else 
        printf("Hurricane");

    printf("\n");

    return 0;
}