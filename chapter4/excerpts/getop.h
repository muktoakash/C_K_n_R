/* Interface for getop.c */

// HEADER GUARDS
#ifndef GETOP_H
    #define GETOP_H

    #define NUMBER '0' /* signal that a number was found */

    /* getop(s)
    
    Returns next operator or operand in input.
    Requires: s is a null-terminated string.
    Side effects: None.
    */
    int getop(char s[]);
#endif