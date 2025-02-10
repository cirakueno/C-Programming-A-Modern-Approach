#include <stdio.h>

#define PI                  3.14159
#define VOLUME_CONSTANT     (4.0f / 3.0f)

int main(void)
{
    float radius, volume;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    volume = VOLUME_CONSTANT * PI * (radius * radius * radius);

    printf("The volume of a sphere with radius = %f is %f\n", radius, volume);

    return 0;
}