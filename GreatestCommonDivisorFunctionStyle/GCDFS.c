/*
 * This program calcutes the Greatest Common Factor of 
 * two user input numbers and prints it in a terminal.
 */
#include <stdio.h>
int main(void)
{
    int GCD (int num1, int num2);
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    result = GCD(num1, num2);
    printf("The result is: %i\n", result);

    return 0;
}
int GCD (int num1, int num2) // using multiargument functions
{
    int mod, tempNum;
    /*
     * the trick is dividing the numbers and in the second run
     * dividing by modulo until modulo is zero. then we take the
     * last divisor and spit it out to main as a return.
     * the if statement is there in case the 1st number entered
     * by the user is less than the second number in which case
     * it swaps their places using tempNum variable.
     */
    if (num1 < num2)
    {
        tempNum = num2;
        num2 = num1;
        num1 = tempNum;
    }
    while (mod != 0)
    {
        mod = num1 % num2;
        num1 = num2;
        num2 = mod;
    }
    
    return num1;
}