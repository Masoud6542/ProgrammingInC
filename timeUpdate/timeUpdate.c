/*
 * this program calculates the next second time;
 * note that there are two versions of timeUpdate
 * function declared, to use the program comment
 * one of them out.
 */
#include <stdio.h>

struct time 
{
    int second;
    int minute;
    int hour;
};

int main(void)
{
    struct time timeUpdate(struct time now);
    struct time now, then;
    now.second  = 59;
    now.minute  = 59;
    now.hour    =22;

    then = timeUpdate(now);
    printf("%.2i:%.2i:%.2i\n", then.hour, then.minute, then.second);

    return 0;
}

// this function does the calculations in my style
struct time timeUpdate(struct time now)
{
    struct time then;
    if (now.second != 59)
    {
        then.second = now.second + 1;
        then.minute = now.minute;
        then.hour   = now.hour;
    }
        else if (now.minute != 59)
        {
            then.second = 00;
            then.minute = now.minute + 1;
            then.hour   = now.hour;
        }
            else if (now.hour != 23)
            {
                then.second = 00;
                then.minute = 00;
                then.hour   = now.hour + 1;
            }
                else
                {
                    then.second = 00;
                    then.minute = 00;
                    then.hour   = 00;
                }
    return then;
}
/*
// this function does the calculation in book style
struct time timeUpdate(struct time now)
{
    ++now.second;
    if(now.second == 60)
    {
        now.second  = 0;
        ++now.minute;
        if (now.minute == 60)
        {
            now.minute  = 0;
            ++now.hour;
            if (now.hour == 24)
            {
                now.hour = 0;
            }
        }    
    }
    return now;
}
*/

