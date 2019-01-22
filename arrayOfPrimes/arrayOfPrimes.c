/*
 * This program uses an array to keep track of the primes
 * because of the efficiency of the new algorithem that can 
 * be used in it. the algorithem says 1: all primes greater
 * than 2 are odd numbers. 2: primes are greater than the 
 * square root of the previous primes up to that number.
 */ 
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, p, primes[50], primeIndex = 2;
    bool isPrime;
    primes[0] = 2;
    primes[1] = 3;

    for (p = 5; p <= 50; p += 2)
    {
        isPrime = true;
        /* the next for loop is checking the square root thingy
         * and the isPrime status.
         */
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    } 
    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }
    printf("\n");
    return 0;
}