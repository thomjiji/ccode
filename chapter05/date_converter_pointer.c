#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main()
{
    int year = 2023; // Replace with the desired year
    int month = 5;   // Replace with the desired month
    int day = 7;     // Replace with the desired day

    int yearday = day_of_year(year, month, day);
    printf("Day of the year: %d\n", yearday);

    int result_month, result_day;
    month_day(year, yearday, &result_month, &result_day);
    printf("Month: %d, Day: %d\n", result_month, result_day);

    return 0;
}

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    char *pdaytab = leap ? daytab[1] : daytab[0];

    for (i = 1; i < month; i++)
        day += *(pdaytab + i);

    return day;
}

/* month_day: set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    char *pdaytab = daytab[0];

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for (i = 1; yearday > *(pdaytab + i); i++)
        yearday -= *(pdaytab + i);

    *pmonth = i;
    *pday = yearday;
}
