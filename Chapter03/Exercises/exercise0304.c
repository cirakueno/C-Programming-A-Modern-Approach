#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);
    printf("i = %d,  x = %f, j = %d\n", i, x, j);

    return 0;
}

/*
    scanf will first read "1", "0" and ".". It knows that an integer cannot have a "." so it will assign "10" to i and keep reading from ".".
    Next, it sees ".", "3" and " " (space). It knows that a float number cannot have a space in any part so it assigns ".3" to x. Next it will
    ignore white space and read "5" and " " (space). It will assign 5 to j and end the read.

    i = 10,  x = 0.300000, j = 5
*/