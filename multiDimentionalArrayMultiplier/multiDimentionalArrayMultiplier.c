/*
 * this program has a sample multi-dimentional array which will
 * be passed to a funtion to be multiplied by a number and the 
 * reslut will be shown using another funtion.
 */
#include <stdio.h>
int main(void)
{
    // prototype declaration
    void scalarMultiply(int array[][5], int multiplier);
    void displayMatrix(int array[][5]);
    // sample multi-dimentional array
    int matrix[3][5] = 
        {
            { 1,  2,  3,  4,  5},
            { 6,  7,  8,  9, 10},
            {11, 12, 13, 14, 15}
        };
    // the default multiplier    
    int multiplier = 2;
    displayMatrix(matrix);
    scalarMultiply(matrix, multiplier);
    displayMatrix(matrix);

    return 0;
}
/*
 * this function cylces through the array given and multiplies
 * it by the multiplier
 */
void scalarMultiply(int array[][5], int multiplier)
{
    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            array[i][j] *= multiplier;
        }
    } 
}
/*
 * this function is to print the array
 */
void displayMatrix(int array[][5])
{
    int i, j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            printf("%2i ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}