#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int is_leap(int year);

int is_valid_date(int year, int month, int day)
{
    // Add more conditions if needed
    int leap = is_leap(year);
    return (year > 0 && month >= 1 && month <= 12 && day >= 1 && day <= daytab[leap][month]);
}

int day_of_year(int year, int month, int day)
{
    if (!is_valid_date(year, month, day))
    {
        // Handle invalid date
        return -1; // or some other suitable value
    }

    int i, leap;

    leap = is_leap(year);

    for (i = 1; i < month; i++)
        day += daytab[leap][i];

    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    if (!is_valid_date(year, 1, 1) || yearday < 1 || yearday > 365 + is_leap(year))
    {
        // Handle invalid yearday
        *pmonth = -1; // or some other suitable value
        *pday = -1;   // or some other suitable value
        return;
    }

    int i, leap;

    leap = is_leap(year);

    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}

int is_leap(int year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main()
{
    int year = 2024; // Replace with the desired year
    int month = 6;   // Replace with the desired month
    int day = 7;     // Replace with the desired day

    int yearday = day_of_year(year, month, day);
    printf("Day of the year: %d\n", yearday);

    int result_month, result_day;
    month_day(year, yearday, &result_month, &result_day);
    printf("Month: %d, Day: %d\n", result_month, result_day);

    return 0;
}
