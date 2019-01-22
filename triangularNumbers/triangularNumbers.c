/*
 * This program calculates the triangular number of the
 * user input number. triangular numbers are the sum of 
 * all the digits from 1 to that number. it's just a big
 * summation. but it show the sum of elements on the 
 * nth row: 
 * 1
 * 1 2
 * 1 2 3
 */
#include <stdio.h>
int main(void)
{
    void triangularNumber(int n);
    int number;
    printf("Enter the desired number: ");
    scanf("%i", &number);
    triangularNumber(number);

    return 0;

}
 void triangularNumber(int n) // the calculator function
{
    int i, triangularNumber = 0;
    for (i = n; i > 0; --i)
    triangularNumber += i;
    printf("the number is %i\n", triangularNumber );
    return; // in void function we can have return like this.]
}