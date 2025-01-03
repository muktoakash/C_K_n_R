// ./sort_lines.h

/* interface for sort_lines.c */

#ifndef SORT_LINES_H
    #define SORT_LINES_H

    #define MAXLINES 5000 /* max #lines to be sorted */

    #define MAXLEN 1000 /* max length of any input line */

    /* sort_lines()
    
    Sorts input lines.
    Side effects: Modifies input.
    Returns: 0 if successful, 1 if input too big to sort.
    */
    int sort_lines_p1();

    /* sort_lines(argc, argv)

    Sorts input lines.
    Requires: argc is the number of arguments, argv is an array of arguments.
    Side effects: Modifies input.
    Returns: 0 if successful, 1 if input too big to sort.
    */

    int sort_lines_p2(int argc, char* argv[]);

#endif