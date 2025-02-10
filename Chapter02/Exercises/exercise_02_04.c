#include <stdio.h>

int main(void)
{
    int i1, i2, i3;
    float f1, f2, f3;

    printf("Print int variables: i1: %d, i2: %d, i3: %d\n", i1, i2, i3);
    printf("Print float variables: f1: %f, f2: %f, f3: %f\n", f1, f2, f3);

    return 0;
}

/*
    My output:
        Print int variables: i1: 100, i2: 0, i3: 4096
        Print float variables: f1: 0.000000, f2: 26148110542745632768.000000, f3: 0.000000
*/