/*
 * this program calculates tomorrows date considering leap years
 */
#include <stdio.h>
#include <stdbool.h>

// this structure is defined globally to be accessible to all funcitons
struct date 
{
    int day;
    int month;
    int year;
};

int main(void)
{
    int numberOfDays(struct date d);
    struct date today, tomorrow;

    printf("Enter today's date (mm dd yyyy):\n");
    scanf("%i %i %i", &today.month, &today.day, &today.year);
// this if checks to see if we are at the end of the month
// if we are not it calculates tomorrows date.
// it's worth noting that this if checks its values agaisnt
// a lookup table at the function "numberOFDays"
    if (today.day != numberOfDays(today))
    {
        tomorrow.day    = today.day + 1;
        tomorrow.month  = today.month;
        tomorrow.year   = today.year;
    }
// if we are at the end of the month, this if checks to see
// if we are at the end of the year, if so it calculates
// tomorrows date
    else if (today.month == 12)
    {
        tomorrow.day    = 1;
        tomorrow.month  = 1;
        tomorrow.year   = today.year + 1;
    }
    else
// if we are not at the end of the month but not at the end of
// the year, this if comes into play.
    {
        tomorrow.day    = 1;
        tomorrow.month  = today.month + 1;
        tomorrow.year   = today.year;
    }
    printf("tomorrow is: %i/%i/%i\n", tomorrow.month, tomorrow.day,
        tomorrow.year);
}

// this fucntion has a lookup table to check to see if we are
// at the end of the month and returns the value which is the
// number of the days to the if statements in main fucntion.
// it also calls the "isLeapYear" function to check and see 
// if todays year is a leap year, if the result comes true it
// will make the second month 29 days.
int numberOfDays(struct date d)
{
    bool isLeapYear(struct date d);
    int days;
    int daysPerMonth[12] =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(d) == true && d.month == 2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];
    }
    return days;
}

// this fucntion checks to see if today's year is leap year and 
// simply sends of true to the "numberOfDays" function if it is
// otherwise it sends a false back.
bool isLeapYear(struct date d)
{
    bool isLeapYearFlag;
    if ((d.year % 4 == 0 && d.year % 100 !=0) || (d.year % 400 == 0))
    {
        isLeapYearFlag = true;
    }
    else
    {
        isLeapYearFlag = false;
    }
    return isLeapYearFlag;
}