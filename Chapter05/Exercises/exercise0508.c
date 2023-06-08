#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;
    bool teenager;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age < 13)
        teenager = false;

    printf("\nFirst method: age = %d -> teenager = %d\n", age, teenager);


    if (age >= 13 && age <= 19)
        teenager = true;
    else   
        teenager = false;

    printf("Second method: age = %d -> teenager = %d\n\n", age, teenager);

    return 0;
}