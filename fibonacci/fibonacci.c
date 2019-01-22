/*
 * As evident as it might be, this is a fibonacci series!
 */
#include <stdio.h>
int main(void)
{
    int fibonacci[15], i;
    for (i = 0; i < 15; ++i)
    {
        fibonacci[i] = 0;
    }
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (i = 2; i < 15; ++i)
    {
        fibonacci[i] = fibonacci[(i - 1)] + fibonacci[(i - 2)];
    }
    for (i = 0; i < 15; ++i)
    {
        printf("%i ", fibonacci[i]);
    }
    printf("\n");
    return 0;
}