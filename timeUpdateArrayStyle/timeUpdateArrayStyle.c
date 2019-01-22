/*
 * this time a new approach! this program is the same as
 * the program "timeUpdate", but this time we are using 
 * an array of structures!
 */
#include <stdio.h>

struct time 
{
    int hour;
    int minute;
    int second;
};

int main(void)
{
    struct time timeUpdate(struct time now);
    // defining and initializing the array of structures
    struct time times[5] = {
                                {11, 59, 59},
                                {12, 00, 00},
                                {01, 29, 59},
                                {23, 59, 59},
                                {19, 12, 27},
                            };
    // looping through the array and calling "timeUpdate" function
    // on all the elements of the array.
    for (int i = 0; i < 5; ++i)
    {
        printf("Time is: %.2i:%.2i:%.2i", 
            times[i].hour, times[i].minute, times[i].second);
        times[i] = timeUpdate(times[i]);
        printf("... one second later it's %.2i:%.2i:%.2i\n", 
            times[i].hour, times[i].minute, times[i].second);
    }
}

// same as the one in "timeUpdate" program
struct time timeUpdate(struct time now)
{
    ++now.second;
    if (now.second == 60)
    {
        now.second = 0;
        ++now.minute;
        
        if (now.minute == 60)
        {   
            now.minute = 0;
            ++now.hour;

            if (now.hour == 24)
            {
                now.hour = 0;
            }
        }
    }
    return now;
}