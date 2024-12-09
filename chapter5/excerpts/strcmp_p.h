// ./strcmp_p.h

/* interface for strcmp_p.c */

#ifndef STRCMP_P_H
    #define STRCMP_P_H

    /* strcmp_a1(s, t)
    
    Compare two strings s and t.
    Requires: s and t are valid strings.
    Returns: < 0 if s < t, 0 if s==t, >0 if s > t.
    */
    int strcmp_a1(char *s, char *t);

    /* strcmp_p1(s, t)
    
    Compare two strings s and t.
    Requires: s and t are valid strings.
    Returns: < 0 if s < t, 0 if s==t, >0 if s > t.
    */
    int strcmp_p1(char *s, char *t);

#endif
