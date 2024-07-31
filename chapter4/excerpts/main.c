#include <stdio.h>
#include "get_line.h"
#include "strindex.h"
#include "atof.h"
#include "getch_ungetch.h"
#include "polish.h"
#include "push_pop.h"
#include "getop.h"
#include "printd.h"
#include "swap.h"
#include "qsort.h"

#define MAXLINE 1000 /* maximum input line length */
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */ 

int test_strindex(){
    printf("Now testing strindex\n");
    char s[] = "hello, world!";
    char t[] = "world";
    int result = strindex(s, t);
    return !(result == 7);
}

int test_get_line()
{
    printf("Now testing get_line\n");
    char pattern[] = "ould"; /* pattern to search for */

    char line[MAXLINE]; /* input line */
    int found = 0;

    while (get_line(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    
    return !found;
}

/* rudimentary calculator to test atof*/
int test_atof()
{
    printf("Now testing atof\n");
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
    printf("Now testing getch_ungetch\n");
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
    printf("Now testing getop\n");
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
    printf("Now testing polish calculator\n");
    return polish_calc();
}

/* test printd */
int test_printd()
{
    printf("Now testing printd\n");
    int n = 123456789;
    printd(n);
    n = -123456789;
    printd(n);
    return 0;
}

/* test swap */
int test_swap()
{
    printf("Now testing swap\n");
    int x = 1;
    int y = 2;
    int v[2] = {x, y};
    printf("x: %d, y: %d\n", x, y);
    swap(v, 0, 1);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}

/* test qsort */
int test_qsort()
{
    printf("Now testing qsort\n");
    int v[] = {5, 3, 4, 1, 2};
    int n = 5;
    qsort(v, 0, n-1);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}

/* main test suite */
int main()
{
    int result = 0;
    result += test_strindex();
    result += test_get_line();
    result += test_atof();
    result += test_getch_ungetch();
    result += test_getop();
    result += test_polish();
    result += test_printd();
    result += test_swap();
    result += test_qsort();

    printf("Total Errors: %d\n", result);
    return 0;
}