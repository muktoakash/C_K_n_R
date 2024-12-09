// ,/getint_p.h

/* interface for getint_p.c */

#ifndef GETINT_P_H
    #define GETINT_P_H
    /* getint_p(*pn)
    
    Get next integer from input into *pn.
    Requires: pn is a valid pointer.
    Side effects: Modifies *pn.
    Returns: The next character from input.
    */
    int getint_p(int *pn);
#endif