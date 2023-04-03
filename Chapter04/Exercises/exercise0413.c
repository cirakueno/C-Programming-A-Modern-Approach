/*
    (i += 1);
    The above is an "expression statement". The statement has a side effect which is to assign 1 to i, but the value is discarded in the sense
    that it is not used anywhere (except for changing the value of i). However the statement has a value by itself and that value is 
    (let's suppose initially i was 4), 5.
    The two other statements ++i; and i++; also have a value. The value of ++i; is 5 (assuming i was 4 originally) while the value of i++; is 4.
    So the statement (i += 1); is equivalent only to ++i;
*/