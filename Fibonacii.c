/* Simple program to find fibonacci series */

#include <stdio.h>

int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;


    printf("Fibonacci Series: ");

    for (i = 1; i <= 5; ++i)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
