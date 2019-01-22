/*
 * this program is just a rearrangement of the program
 * baseConverterBookStyle into a global variable style
 * with different functions devised.
 */
#include <stdio.h>

int         convertedNumber[64];
long int    numberToConvert;
int         base, index = 0;

int main(void)
{
    void getNumberAndBase(void);
    void convertNumber(void);
    void displayConvertedNumber(void);
    getNumberAndBase();
    convertNumber();
    displayConvertedNumber();
   
    return 0;
}
void getNumberAndBase(void)
{
    printf("Number to be converted? ");
    scanf("%ld", &numberToConvert);
    printf("Base? ");
    scanf("%i", &base);
// this part is new! it just checks for the base to be between 2 and 16
    if (base < 2 || base > 16)
    {
        printf("Bad base! - must be between 2 and 16\n");
        base = 10;
    }
}
void convertNumber(void)
{
    do
    {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert /= base;
    } while (numberToConvert != 0);
}
void displayConvertedNumber(void)
{
    int nextDigit;
    const char baseDigits[16] = {'0', '1', '2', '3',
        '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
        'D', 'E', 'F'};

    printf("Converted number = ");

    for (--index; index >= 0; --index)
    {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}