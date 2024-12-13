// ./numcmp.h

/* interface for numcmp.c */

#ifndef NUMCMP_H
    #define NUMCMP_H

    /* numcmp(s1, s2)
    
    Compares s1 and s2 numerically.
    Requires: s1 and s2 are valid strings.
    Returns: -1 if s1 < s2, 0 if s1 == s2, 1 if s1 > s2.
    */
    int numcmp(char *s1, char *s2);

#endif