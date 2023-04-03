/*
    (a) 8 / 5       -> Always 1
    (b) -8 / 5      -> Either -1 or -2
    (c) 8 / -5      -> Either -1 or -2
    (d) -8 / -5     -> Either 1 or 2

    For (b), (c), and (d) the reason we have two different possible answers is because:
    "The C89 standard states that if either operand is negative, the result of a division can be rounded either up or down."
*/