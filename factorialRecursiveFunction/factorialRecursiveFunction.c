/*
 * smart man's factorial
 * it uses recursive function to achieve it.
 */
#include <stdio.h>
int main(void)
{
    // prototype declaration
    unsigned long int factorial(unsigned int n);
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);
    printf("Factorial of %i is %lu.", number, factorial(number));

    printf("\n");

    return 0;
}
/*
 * this function calculates the factorial of the given argument
 * using the recursive function capabilities.
 */
unsigned long int factorial(unsigned int n)
{
    unsigned long int result;
    if (n == 0) // factorial of 0 is 1
    {
        result = 1; 
    } else {
        /*
         * this is the tricky part of this program. it makes the
         * return to itself to calculate the unknown part giving
         * itself the indication of the next iteration of the 
         * function.
         */
        result = n * factorial(n - 1); 
    }
    return result;
}