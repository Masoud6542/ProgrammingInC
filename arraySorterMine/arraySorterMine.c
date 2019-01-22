/*
 * this program is an array sorter of some sort!
 */
#include <stdio.h>
int main(void)
{
    // prototype of the sorter function
    void sort(int array[], int numberOfElements);
    int scrambled[] = {3, 5, 1, 9, 0, 7, 2, 8, 4, 6};
    int i, numberOfElements = 10;

    sort(scrambled, 10);
    /*
     * descending order
     */
    for (i = 0; i < numberOfElements; ++i)
    {
        printf("%i, ", scrambled[i]);
    }
    printf("\n");
    /*
     * ascending order
     */
    for (i = (numberOfElements - 1); i >= 0; --i)
    {
        printf("%i, ", scrambled[i]);
    }
    printf("\n");

    return 0;
}
/*
 * a sorter function which searches through the array and
 * changing the location of elements based on their relative
 * values.
 */
void sort(int array[], int numberOfElements)
{
    int i, j, value;
    for (i = 0; i < numberOfElements; ++i)
    {
        /*
         * setting the value to be compared against others
         */
        value = array[i]; 
        for (j = (i + 1); j < numberOfElements; ++j)
        {
            // comparing the values
            if (array[j] < value)
            {
                /*
                 * swapping the element values of the array
                 */
                value = array[j];
                array[j] = array [i];
                array[i] = value;
            }
        }
    }
    /*
     * since the array was passed to this function, the array
     * itself was rearranged, therefore there is no need to
     * return anything back, it's already changed.
     */
    return; 
}