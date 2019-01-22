/*
 * This program calculates the root of a given number using the 
 * Newton-Raphson Iteration Technique.
 */ 
 
#include <stdio.h>
int main(void)
{
    float rootCalculator(float number); // prototype of the root cal function
    
    float number, result;
    printf("Enter the number you want the root of: ");
    scanf("%f", &number);
    result = rootCalculator(number);
    printf("The answer is: %.3f", result);
}
// root calculator function
float rootCalculator(float number)
{
    float absoluteNumber(float number); // prototype of the absolute function
    float guess = 1, percision = 0.001;   
    /*
     * the technique is like this: we guess a number to be the root
     * of the given number, for this guess we start from 1. the formula
     * is like this: newGuess = (((givenNumber / guess) + guess) / 2).
     */   
    do
    {
        guess = (((number / guess) + guess) / 2);
        /*
         * to stop the iteration when the desired percision is reached,
         * we can take the difference of the givenNumber and square of guess
         * and compare it to the desired percision of say 0.0001:
         * givenNumber - (guess * guess) > percision.
         * since the guess can approach the number from either side, we must
         * employ an absolute function for this stage. 
         */
        
    } while (absoluteNumber(number - (guess * guess)) >= percision);
    return guess;
}

// absolute calculator function
float absoluteNumber(float number)
{
    if (number >= 0)
    {
        return number;
    } else {
        return (-number);
    }
}