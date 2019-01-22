/*
 * this program shows next day's date considering leap years.
 * there are two "dateUpdate" functions supplied, one must be
 * commented out, you can choose either.
 * note that this program uses the same material and logic to
 * the program "tomorrowDate", so for further reference refer
 * to that program.
 */
#include <stdio.h>
#include <stdbool.h>

struct date 
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date dateUpdate(struct date today);
    struct date today, tomorrow;
    today.day   = 12;
    today.month = 12;
    today.year  = 1295;
    
    tomorrow = dateUpdate(today);
    printf("%i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);

    return 0;
}

struct date dateUpdate(struct date today)
{
    int numberOfDays(struct date today);
    struct date tomorrow;
    if (today.day != numberOfDays(today))
    {
        tomorrow.day    = today.day + 1;
        tomorrow.month  = today.month;
        tomorrow.year   = today.year;
    }
        else if (today.month == 12)
        {
            tomorrow.day    = 1;
            tomorrow.month  = 1;
            tomorrow.year   = today.year + 1;
        }
            else
            {
                tomorrow.day    = 1;
                tomorrow.month  = today.month + 1;
                tomorrow.year   = today.year;
            }
    return tomorrow;
}

/*
struct date dateUpdate(struct date today)
{
    int numberOfDays(struct date today);
    
    if (today.day != numberOfDays(today))
    {
        ++today.day;
    }
    else if (today.month != 12)
    {
        today.day    = 1;
        ++today.month;       
    }
    else
    {
        today.month  = 1;
        ++today.year;
    }
    return today;
}
*/

int numberOfDays(struct date today)
{
    bool isLeapyear(struct date today);
    int days;
    int daysPerMonth[12] = 
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapyear(today) == true && today.month == 2)
    {
        days = 29;
    }
        else
        {
            days = daysPerMonth[today.month];
        }
    return days;
}

bool isLeapyear(struct date today)
{
    bool isLeapyear;
    if ((today.year % 4 == 0 && today.year % 100 != 0) ||
            (today.year % 400 == 0))
    {
        isLeapyear = true;
    }
        else
        {
            isLeapyear = false;
        }
    return isLeapyear;
}

