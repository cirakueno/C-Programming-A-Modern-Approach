#include <stdio.h>

int main(void)
{
    int i;
    float x, y;

    printf("scanf has the following format: scanf(\"%%f%%d%%f\", &x, &i, &y);\n");
    printf("Enter the following \"12.3 45.6 789\": ");
    scanf("%f%d%f", &x, &i, &y);
    printf("Values after: i = %d, x = %f, y = %f\n", i, x, y);

    return 0;
}

/*
    Output:
        Values after: i = 45, x = 12.300000, y = 0.600000
*/

// scanf reads the first number "12.3" and sees the %f placeholder so it plaes the value "12.3" to x. The next number is "45.6" which is read by scanf. scanf sees that the placeholder is
// %d and it know there can be no "." in "int" so it assigns 45 to "i" and puts the ".6" in the buffer. The next placeholder is %f which is assigned the value ".6" associated with "y".
// The last value is 789 which is left for the next call of scanf.