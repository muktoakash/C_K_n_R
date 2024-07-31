/* Interface for getop.c */

// HEADER GUARDS
#ifndef GETOP_H
    #define GETOP_H

    /* getop(s)
    
    Returns next operator or operand in input.
    Requires: s is a null-terminated string.
    Side effects: None.
    */
    int getop(char s[]);
#endif