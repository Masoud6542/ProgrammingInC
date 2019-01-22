/*
 * This program will take in 20 responses from the range of
 * 1 to 10 inclusive as input and puts then inside an array
 * to count the ratings.
 */
#include <stdio.h>
int main(void)
{
    int i, response, ratingCounter[10];

    for (i = 0; i < 10; ++i) // zeroing all the array elements
    {
        ratingCounter[i] = 0;
    }
    printf("Enter your response: \n");
    for (i = 0; i < 20; ++i)
    {
        scanf("%i", &response);
        if (response < 1 || response > 10)
        {
            printf("invalid response: %i", response);
        } else {
            ++ratingCounter[(response-1)]; // important bit to remember!
        }
    }
    printf("Rating     Number of responses\n");
    printf("------------------------------\n");
    for (i = 0; i < 10; ++i)
    {
        printf("%4i%16i\n", (i + 1), ratingCounter[i]);
    }

    return 0;

}