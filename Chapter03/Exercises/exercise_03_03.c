#include <stdio.h>

int main(void)
{
    int i, j;
    int k, l, m, n, o, p;
    float f1, f2;
    float f3, f4, f5, f6;

    // (a) The two are the same no matter the spaces in the input.
    printf("Enetr first number, i, in format '%%d': ");
    scanf("%d", &i);
    printf("Enter second number, j, in format ' %%d': ");
    scanf(" %d", &j);

    printf("i = %d, j = %d\n", i, j);
    
    
    
    
    // (b) The two are not equivalent. If we enter "1 -2 -3" for the first scanf call we will not get the same result as the second call of scanf. 
    //     This is because in the first scanf call the format expects a "-" right after the number.
    printf("Enter the three numbers, k, l, m, in format %%d-%%d-%%d: ");
    scanf("%d-%d-%d", &k, &l, &m);
    printf("Enter the three numbers, n, o, p, in format %%d -%%d -%%d: ");
    scanf("%d -%d -%d", &n, &o, &p);

    printf("k = %d, l = %d, m = %d, n = %d, o = %d, p = %d\n", k, l, m, n, o, p);
    
    
    
    
    // (c) Strictly speaking they are not equivalent. One edge-case where they differ is for the following input: "3.14abc". The first scanf will read '3.14' at f1 and stop at 'a'.
    //     The second scanf call will read '3.14' but after reading 'a' it will fail as it expects a space.
    //     So, the first scanf "%f" reads the number and stops at the first non-numeric character. While the second one, "%f " expects a floating-point number followed by a space.
    printf("Enter first float, f1, in format '%%f': ");
    scanf("%f", &f1);
    printf("Enter second float, f2, in format '%%f ': ");
    scanf("%f", &f2);

    printf("f1 = %f, f2 = %f\n", f1, f2);
    
    
    
    
    // (d) The two are the same no matter the spaces in the input.
    printf("Enter float, f3, f4 in format '%%f,%%f': ");
    scanf("%f,%f", &f3, &f4);
    printf("Enter float, f5, f6 in format '%%f, %%f': ");
    scanf("%f,%f", &f5, &f6);

    printf("f3 = %f, f4 = %f, f5 = %f, f6 = %f\n", f3, f4, f5, f6);

    return 0;
}