/*
    (a) 8 % 5       -> Always 3
    (b) -8 % 5      -> Either -3 or 2
    (c) 8 % -5      -> Either 3 or -2
    (d) -8 % -5     -> Either -3 or 2

    For (b), (c), and (d) the reason we have two different possible answers is because the expression:
    (x/y) * y + x%y should always give x.
    But we saw in exercise0403.c that (x/y) can give two possible answers in C89, either rounded up or down,
    if one of the operands is negative. Let's solve (b):
    -8 / 5 can be -1 or -2 which means:
        I. (-8/5) * 5 + -8%5 = -8
           -1 * 5 + -8%5 = -8
           -8%5 = -8 + 5
           -8%5 = -3
        II. (-8/5) * 5 + -8%5 = -8
            -2 * 5 + -8%5 = -8
            -8%5 = 2
    Let's now solve (c):
        I. (8/-5) * -5 + 8%-5 = 8
           -1 * -5 + 8%-5 = 8
           8%-5 = 8 - 5
           8%-5 = 3
        II. (8/-5) * -5 + 8%-5 = 8
           -2 * -5 + 8%-5 = 8
           8%-5 = 8 - 10
           8%-5 = -2
    Finally for (d):
        I. (-8/-5) * -5 + -8%-5 = -8
           1 * -5 + -8%-5 = -8
           -8%-5 = -3
        II. (-8/-5) * -5 + -8%-5 = -8
           2 * -5 + -8%-5 = -8
           -8%-5 = 2
*/