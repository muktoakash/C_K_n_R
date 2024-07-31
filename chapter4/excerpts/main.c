#include <stdio.h>
#include "get_line.h"
#include "strindex.h"
#include "atof.h"

#define MAXLINE 1000 /* maximum input line length */

int test_strindex(){
    char s[] = "hello, world!";
    char t[] = "world";
    int result = strindex(s, t);
    return (result == 7);
}

int test_get_line()
{
    char pattern[] = "ould"; /* pattern to search for */

    char line[MAXLINE]; /* input line */
    int found = 0;

    while (get_line(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    
    return found;
}

/* rudimentary calculator */
int test_atof()
{
    double sum, atof(char []);
    char line[MAXLINE];
    int get_line(char line[], int max);

    sum = 0;
    while (get_line(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}