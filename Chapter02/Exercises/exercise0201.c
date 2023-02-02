#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/* 
    I get no warning message from the compiler, however to make the program completely correct
    the "return 0;" statement is needed after the printf call.
*/