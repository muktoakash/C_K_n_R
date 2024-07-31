/* Interface for polish.c */

#ifndef POLISH_H
    #define POLISH_H

    #include "push_pop.h"

    #define MAXOP 100 /* max size of operand or operator */
    #define NUMBER '0' /* signal that a number was found */ 

    int getop(char []);
    int polish_calc(void);

#endif