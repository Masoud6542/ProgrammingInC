/*
 * variable length array!
 */

#include <stdio.h>
int main(void)
{
    int numFibs, i;
    printf("enter a number between 1 and 75: ");
    scanf("%i", &numFibs);
    if (numFibs < 1 || numFibs > 75)
    {
        printf("Wrong number!\n");
        return 1;
    }
    /*
     * fibonacci numbers can get pretty big pretty soon!
     */
    unsigned long long fibonacci[numFibs];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (i = 2; i < numFibs; ++i)
    {
        fibonacci[i] = fibonacci[(i - 1)] + fibonacci[(i - 2)];
    }
    for (i = 0; i < numFibs; ++i)
    {
        printf("%llu ", fibonacci[i]); // notice the llu!
    }
    printf("\n");
    return 0;

}