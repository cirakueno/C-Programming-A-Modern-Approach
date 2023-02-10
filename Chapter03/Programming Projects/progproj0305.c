#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16;
    int row1_sum, row2_sum, row3_sum, row4_sum;
    int col1_sum, col2_sum, col3_sum, col4_sum;
    int main_diag, second_diag;

    printf("Enter the numbers form 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15, &i16);

    printf("\n");
    printf("%3d%3d%3d%3d\n", i1, i2, i3, i4);
    printf("%3d%3d%3d%3d\n", i5, i6, i7, i8);
    printf("%3d%3d%3d%3d\n", i9, i10, i11, i12);
    printf("%3d%3d%3d%3d\n\n", i13, i14, i15, i16);

    row1_sum = i1 + i2 + i3 + i4;
    row2_sum = i5 + i6 + i7 + i8;
    row3_sum = i9 + i10 + i11 + i12;
    row4_sum = i13 + i14 + i15 + i16;

    col1_sum = i1 + i5 + i9 + i13;
    col2_sum = i2 + i6 + i10 + i14;
    col3_sum = i3 + i7 + i11 + i15;
    col4_sum = i4 + i8 + i12 + i16;

    main_diag = i1 + i6 + i11 + i16;
    second_diag = i4 + i7 + i10 + i13;

    printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);
    printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum, col3_sum, col4_sum);
    printf("Diagonal sums: %d %d\n", main_diag, second_diag);

    return 0;
}