#include <stdio.h>

#define PI                  3.14159
#define VOLUME_CONSTANT     (4.0f / 3.0f)

int main(void)
{
    float radius = 10.0f, volume;

    volume = VOLUME_CONSTANT * PI * (radius * radius * radius);

    printf("The volume of a sphere with radius = %f is %f\n", radius, volume);

    return 0;
}

// If I instead enter 4/3 then this will evaluate to 1