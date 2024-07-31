#include <stdio.h>
#include "get_line.h"
#include "strindex.h"
#include "atof.h"
#include "getch_ungetch.h"
#include "polish.h"
#include "push_pop.h"
#include "getop.h"
#include "printd.h"

#define MAXLINE 1000 /* maximum input line length */

int test_strindex(){
    prinf("Now testing strindex\n");
    char s[] = "hello, world!";
    char t[] = "world";
    int result = strindex(s, t);
    return (result == 7);
}

int test_get_line()
{
    prinf("Now testing get_line\n");
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

/* rudimentary calculator to test atof*/
int test_atof()
{
    prinf("Now testing atof\n");
    double sum, atof(char []);
    char line[MAXLINE];
    int get_line(char line[], int max);

    sum = 0;
    while (get_line(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}

/* test functions to test all the code for the polish calculator */

/* test getch_ungetch */
int test_getch_ungetch()
{
    prinf("Now testing getch_ungetch\n");
    int c;
    int count = 0;
    while ((c = getch()) != EOF){
        if (((count + 1) % 3) == 0){
            printf("ungetch:\n");
            ungetch(c);
        }
        printf("used getch:\n");
        putchar(c);
        count++;
        if (c == 'q')
            break;
    }
    return 0;
}

/* test getop */
int test_getop()
{
    prinf("Now testing getop\n");
    char s[MAXOP];
    int type;
    while ((type = getop(s)) != EOF){
        if (type == NUMBER)
            printf("NUMBER: %s\n", s);
        else if (type == 'q')
            break;
        else
            printf("OPERATOR: %s\n", s);
    }
    return 0;
}

/* test polish calculator */
int test_polish()
{
    prinf("Now testing polish calculator\n");
    return polish_calc();
}

/* test printd */
int test_printd()
{
    prinf("Now testing printd\n");
    int n = 123456789;
    printd(n);
    n = -123456789;
    printd(n);
    return 0;
}