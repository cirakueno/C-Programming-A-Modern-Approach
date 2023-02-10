/*
    (a) "%d"        versus " %d"        -> Identical!
    (b) "%d-%d-%d"  versus "%d -%d -%d" -> Not the same! The second version of the string can tolerate spaces after the number, while the first cannot.
    (c) "%f"        versus "%f "        -> Not the same! The second instance will not continue unless we enter a non-numeric character or after white-space we enter a non-white space character.
    (d) "%f,%f"     versus "%f, %f"     -> Identical!
*/