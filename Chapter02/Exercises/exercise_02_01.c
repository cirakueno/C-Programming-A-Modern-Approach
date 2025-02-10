#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

// Using splint I get the following warning message:

/*
    exercise_02_01.c: (in function main)
    exercise_02_01.c:6:2: Path with no return in function declared to return int
    There is a path through a function declared to return a value on which there
    is no return statement. This means the execution may fall through without
    returning a meaningful result to the caller. (Use -noret to inhibit warning)

    Finished checking --- 1 code warning
*/

// To remove the warning a 'return' statement is needed at the end of the main function.