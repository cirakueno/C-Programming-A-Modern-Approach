#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float radius = 10.0f, volume;

    volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("Volume of sphere with radius %f-m is %f-m3\n", radius, volume);

    return 0;
}

// If we write (4.0f / 3.0f) as (4/3) we would get 1. So, it would be useless because a number multiplied by 1 gives the number itself.