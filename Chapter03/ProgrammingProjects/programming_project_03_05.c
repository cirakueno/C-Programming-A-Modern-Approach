#include <stdio.h>

int main(void)
{
    int e11, e12, e13, e14, e21, e22, e23, e24, e31, e32, e33, e34, e41, e42, e43, e44;
    int r1_sum, r2_sum, r3_sum, r4_sum;
    int c1_sum, c2_sum, c3_sum, c4_sum;
    int diagonal_sum1, diagonal_sum2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &e11, &e12, &e13, &e14, &e21, &e22, &e23, &e24, &e31, &e32, &e33, &e34, &e41, &e42, &e43, &e44);

    printf("\n");
    printf("%3d %3d %3d %3d\n", e11, e12, e13, e14);
    printf("%3d %3d %3d %3d\n", e21, e22, e23, e24);
    printf("%3d %3d %3d %3d\n", e31, e32, e33, e34);
    printf("%3d %3d %3d %3d\n", e41, e42, e43, e44);

    r1_sum = e11 + e12 + e13 + e14;
    r2_sum = e21 + e22 + e23 + e24;
    r3_sum = e31 + e32 + e33 + e34;
    r4_sum = e41 + e42 + e43 + e44;

    c1_sum = e11 + e21 + e31 + e41;
    c2_sum = e12 + e22 + e32 + e42;
    c3_sum = e13 + e23 + e33 + e43;
    c4_sum = e14 + e24 + e34 + e44;

    diagonal_sum1 = e11 + e22 + e33 + e44;
    diagonal_sum2 = e41 + e32 + e23 + e14;

    printf("\n");
    printf("Row sums: %d %d %d %d\n", r1_sum, r2_sum, r3_sum, r4_sum);
    printf("Column sums: %d %d %d %d\n", c1_sum, c2_sum, c3_sum, c4_sum);
    printf("Diagonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);

    return 0;
}