#include <stdio.h>

int main(void)
{
    int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}

/*
    Attention!
    This solution does not handle the cases for which a code can start with 0. In that case the number will be displayed without the leading 0.
    We cannot write the conversion specification as "%.Xd" because we do not know the number of total digits, which might vary as mentioned in the
    exercise.
    To correctly show the leading 0 as well we might treat the numbers (codes) as strings rather than integer.
*/