/* 
 * This program converts a base 10 number into other bases
 * up to base 16.
 */
#include <stdio.h>
int main(void)
{
    int i, num, base, mod[20], modIndex = 0, numToBePrinted;
    
    printf("Enter the number: ");
    scanf("%i", &num);
    numToBePrinted = num; // used to keep the original number entered.
    printf("Enter the desired base: ");
    scanf("%i", &base);

    for (i = 0; num >= base; ++i)
    {    
        mod[i] = num % base;
        num /= base;
        ++modIndex; // modIndex is used at the end of the program
                    // loop through the array
        /* 
         * this is to take the first digit of the desired base from
         * the quotient of the num divided by base. it's run once as
         * the last step of the conversion.
         */
         if (num < base) 
        {
            mod[(i+1)] = num;
            ++modIndex;
        }       
    }
    printf("%i in base %i is: ", numToBePrinted, base);
    if (base == 16)
    {
        printf("0x");
    } else if (base == 8)
    {
        printf("0");
    } else if (base == 2) 
    {
        printf("0b");
    }
        
    for (i = (modIndex-1); i >= 0; i--)
    {   
        /*
         * the switch is here to compensate for the number bases
         * more than 10 by replacing characters 'a' through 'f'.
         */
        switch (mod[i])
        {
            case 10:
            printf("%c", 'A');
            break;
            case 11:
            printf("%c", 'B');
            break;
            case 12:
            printf("%c", 'C');
            break;
            case 13:
            printf("%c", 'D');
            break;
            case 14:
            printf("%c", 'E');
            break;
            case 15:
            printf("%c", 'F');
            break;
            default:
            printf("%i", mod[i]);            
        }
    }
    printf("\n");
    
    return 0;
}