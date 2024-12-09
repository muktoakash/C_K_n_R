// ./sort_lines.c

#include <stdio.h>
#include <string.h>

#include "sort_lines.h"
#include "alloc_free_p.h"
#include "qsort_p.h"
#include "../../chapter4/excerpts/get_line.h"


// #define MAXLINES 5000 /* max #lines to be sorted */

char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

/* sort input lines */
int sort_lines()
{
    int nlines; /* number of input lines read */

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort_p1(lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

// # define MAXLEN 1000 /* max length of any input line */

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = alloc_p(len)) == NULL)
            return -1;
        else {
            line[len-1] = '\0'; /* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
    int i;

    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}

/* writelines: write output lines */
void writelines_p(char *lineptr[], int nlines)
{
    while (nlines-->0)
        printf("%s\n", *lineptr++);
 
}