#include<stdio.h>
#include<assert.h>

/* is_leap_year(year) : print if year is a leap year or not */
void is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

int main(){
    /* Tests */
    is_leap_year(2000);
    is_leap_year(2004);
    is_leap_year(1900);
    is_leap_year(2001);
}