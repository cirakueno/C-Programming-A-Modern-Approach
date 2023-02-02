/*
    It is not a good idea to use adjacent underscores because sometimes it is not clear whether there is one, two, or more.
    If we are trying to use such a variable which was initialized and declared, but accidentally miss or add one underscore we will get an error.
    However, if we have several such variables we might be using the wrong one. For example, suppose we declare the following variables:
    int current____balance = 10, current_____balance = 20;
    If we are not careful we might be using one instead of the other. In that case the logic of our program would be wrong even though we
    would not get any errors.
*/