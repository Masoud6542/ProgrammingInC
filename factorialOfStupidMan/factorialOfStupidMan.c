/*
 * stupid man's factorial!
 */
#include <stdio.h>
int main(void)
{
    int factorial(int n);
    int n = 5;
    int result = factorial(n);
    printf("%i", result);

    return 0;
}
int factorial(int n)
{
    int factorial, i;
    factorial = 1;
    
    for (i = n; i > 1; i -= 2)
    {
        factorial *= n * (n - 1);
        n -= 2;
    }
    return factorial;
}