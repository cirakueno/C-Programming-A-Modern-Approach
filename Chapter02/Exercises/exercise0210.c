/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void) // Essential is the space between "int" and "main".
{
    int height, length, width, volume, weight; // Essential is the space between "int" and "height".

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // Essential in the following three statements are the spaces within the strings themselves, otherwise the output will change.
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inxhes): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0; // Essential is the space between "return" and "0".
}