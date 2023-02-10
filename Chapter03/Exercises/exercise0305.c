#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    scanf("%f%d%f", &x, &i, &y);
    printf("x = %f,  i = %d, y = %f\n", x, i, y);

    return 0;
}

/*
    Same reasoning as the exercise0304.c:
    x = 12.300000,  i = 45, y = 0.600000
*/