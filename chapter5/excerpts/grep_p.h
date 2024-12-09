// ./grep_p.h

/* interface for grep_p.c */

#ifndef GREP_P_H
    #define GREP_P_H
    
    #define MAXLINE 1000
    
    /* grep_p(argc, argv)
    
    Print lines that match pattern from 1st arg.
    Requires: argc is the number of arguments, argv is an array of strings.
    Side effects: Prints to stdout.
    Returns: The number of lines that match the pattern.
    */
    int grep_p(int argc, char *argv[]);

#endif