/* 
 * This program will generate a table of primes
 * from 0 to a.
 */ 
#include <stdio.h>
/*
 * programming in c 4th edition, page 116
 */
int main(void)
{
   int a, b;
   _Bool isPrime;
   for (a = 2; a <= 50; ++a)
   {
      isPrime = 1;
      for (b = 2; b < a; ++b)
      {
         if (a % b == 0)
         {
            isPrime = 0;
         }         
      }
      if (isPrime != 0)
      {
         printf("%i ", a);
      }  
   }
   printf("\n");
   return 0;
}