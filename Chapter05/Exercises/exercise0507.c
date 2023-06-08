#include <stdio.h>

int main(void)
{
    int i;

    i = 17;
    printf("i = %d:\n", i);
    printf("%d\n\n", i >= 0 ? i : -i);

    i = -17;
    printf("i = %d:\n", i);
    printf("%d\n\n", i >= 0 ? i : -i);

    return 0;
}

// In both cases it will print 17.