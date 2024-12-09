// ./month_day.h

/* interface for month_day.c */

#ifndef MONTH_DAY_H
    #define MONTH_DAY_H

    /* day_of_year(year, month, day)
    
    Set day of year from month and day.
    Requires: year, month, and day are valid integers.
    Returns: The day of year.
    */
    int day_of_year(int year, int month, int day);

    /* month_day(year, yearday, *pmonth, *pday)
    
    Set month and day from day of year.
    Requires: year, yearday, pmonth, and pday are valid integers.
    Side effects: Modifies *pmonth and *pday.
    */
    void month_day(int year, int yearday, int *pmonth, int *pday);

#endif