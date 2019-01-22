/*
 * This program takes in 10 values from the user and calculates
 * the minimum to show on the output.
 */
 
#include <stdio.h>
int main(void)
{
    /*
     * function prototype. it takes two argumetns, the first one
     * takes the array and the second one take the number of the 
     * elements of the array making it essentially an arbitrary
     * length array function.
     */
    int minimum(int array[], int numberOfElements);
    int scores[10], i, numberOfElements;
    printf("How many scores do you want to enter? ");
    scanf("%i", &numberOfElements);
    printf("Enter your scores:\n");
    for (i = 0; i < numberOfElements; ++i)
    {
        scanf("%i", &scores[i]);
    }
    int result;
    result = minimum(scores, numberOfElements);
    printf("The minimum is: %i", result);
    return 0;
}
//this function takes in as array as the argument
int minimum(int array[], int numberOfElements) 
{
    int i, minValue;
    minValue = array[0];
    for (i = 1; i < numberOfElements; ++i) // cycling through the array elements
    {
        if (array [i] < minValue) // determining the min of two elements
        {
            minValue = array[i];            
        } 
    }    
    return minValue;
}