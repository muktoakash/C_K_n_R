/* get_line.h */

/*
Interface for get_line.c
*/

#ifndef GET_LINE_H
    #define GET_LINE_H

    /* get_line(s, lim) 
    
    Reads line from stdin into s, stopping at lim or EOF or newline.
    Returns length of line.
    Requires: s is large enough to hold line or string of length lim.
    Side effects: Modifies s.
    */
    int get_line(char s[], int lim);

#endif

