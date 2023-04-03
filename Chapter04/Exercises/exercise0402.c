/*
    In C99 the result will always be the same because in both cases the result is truncated toward 0.
    In C89 there are two different posibilities as it is "implementation-defined". Let us take the case with i = 5, j = 3:
        1.  -(i/j) is -(5/3) and will always be -1, because (5/3) will always be rounded towards 0.
        2.  (-i/j) will have two different possibilities:
            (-5/3) will either be -1 or -2
*/