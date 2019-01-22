
// This program will reverse the order of the user input number

#include <stdio.h>
int main(void)
{
    int a, temp;
    printf("Enter a number that you want to see in reverse order: ");
    scanf("%i", &a);
    printf("Here you go: ");
    /*
     * The idea is that when you devide a number by 10, the modulo is
     * the rightmost digit of that number. if you devide the number again
     * the process repeats. 1234 % 10 = 4, 123 % 10 = 3, ...
     */
    while (a != 0)
    {
        temp = a % 10;
        printf("%i", temp);
        a = a / 10;
    }
    printf("\n");
    return 0;
}