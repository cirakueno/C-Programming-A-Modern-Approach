#include <stdio.h>

int main(void)
{
    int i1, i2, i3;
    float f1, f2, f3;

    printf("Integers: i1 = %d, i2 = %d, i3 = %d\n", i1, i2, i3);
    printf("Floating-points: f1 = %f, f2 = %f, f3 = %f\n", f1, f2, f3);

    return 0;
}

/*
    This is the output I get after two compilations. I used gcc compiler (gcc version 11.3.0):

    (after 1st time)
    Integers: i1 = 100, i2 = 0, i3 = 4096
    Floating-points: f1 = 0.000000, f2 = -3.558617, f3 = 0.000000

    (after 2nd time)
    Integers: i1 = 100, i2 = 0, i3 = 4096
    Floating-points: f1 = 0.000000, f2 = 14936.093750, f3 = 0.000000
*/