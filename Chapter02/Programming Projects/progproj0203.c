#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float radius, volume;

    printf("Enter radius of sphere (in meters): ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("Volume of sphere with radius %f-m is %f-m3\n", radius, volume);

    return 0;
}