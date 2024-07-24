/* strindex.h */

/* Interface for strindex.c */

#ifndef STRINDEX_H
    #define STRINDEX_H

    /* strindex(s, t)
    
    Returns index of t in s, -1 if none.
    Requires: s and t are null-terminated strings.
    Side effects: None.
    */
    int strindex(char s[], char t[]);

#endif