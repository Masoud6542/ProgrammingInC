
/* 
 * This program calculates the greatest common divisor 
 * of two given numbers
 */

#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter the two numbers that you want the GCD of: ");
    scanf("%i%i", &a, &b );
    /*
     * Here we use Euclid formula for GCD, it goes like this:
     * first we compute the modulo of two numbers (dividend % divisor)
     * and store it in variable 'temp', after that we devide the qoutient
     * (the new divisor) by the modulo (the new divisor). we repeat this
     * process until the modulo is zero. at that stage the divisor is 
     * the GCD.
     */
    printf("The GCD of %i and %i is ", a, b);
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%i.\n", a);
        
    return 0;
}