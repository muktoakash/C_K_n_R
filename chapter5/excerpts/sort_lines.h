// ./sort_lines.h

/* interface for sort_lines.c */

#ifndef SORT_LINES_H
    #define SORT_LINES_H

    #include <stdio.h>
    #include <string.h>

    #include "sort_lines.h"
    #include "alloc_free_p.h"
    #include "qsort_p.h"
    #include "../../chapter4/excerpts/get_line.h"

    #define MAXLINES 5000 /* max #lines to be sorted */

    # define MAXLEN 1000 /* max length of any input line */

    /* sort_lines()
    
    Sorts input lines.
    Side effects: Modifies input.
    Returns: 0 if successful, 1 if input too big to sort.
    */
    int sort_lines();

#endif