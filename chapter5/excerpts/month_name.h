// ./month_name.h

/* interface for month_name.c */

#ifndef MONTH_NAME_H
    #define MONTH_NAME_H

    /* month_name(n)
    
    Return name of n-th month.
    Requires: n is a valid integer.
    Returns: The name of the n-th month.
    */
    char *month_name(int n);

#endif