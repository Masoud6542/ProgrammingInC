/*
 * as the name has it, it shows the absolute value of a given number.
 */
#include <stdio.h>
int main(void)
{
    float absoluteValue(float number);
    float number, result;
    printf("Enter a number: ");
    scanf("%f", &number);
    result = absoluteValue(number);
    printf("The absolute value of the number is: %.3f\n", result);
    return 0;

}
float absoluteValue(float number)
{
    if (number >= 0)
    {
        return number;
    } else {
        return -number;
    }
}