// ./find_p.h

/* interface for find_p.c */

#ifndef FIND_P_H
    #define FIND_P_H

    #define MAXLINE 1000 // Uses buffer of size MAXLINE to store lines.
    
    /* find_p(argc, argv)
    
    Print lines that match pattern from 1st arg.
    Requires: argc is the number of arguments, argv is an array of arguments.
    Returns: 0 if successful, -1 if unsuccessful.
    */
    int find_p(int argc, char *argv[]);
#endif