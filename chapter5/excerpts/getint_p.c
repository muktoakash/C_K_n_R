// ./getint_p.c
#include "getint_p.h"

#include <stdio.h>
#include <ctype.h>
#include "../../chapter4/excerpts/getch_ungetch.h"


int getch(void);
void ungetch(int);

/* getint: get next integer from input into *pn */
int getint_p(int *pn)
{
    int c, sign;

    while (isspace(c = getch())) /* skip white space */
        ; 
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* it's not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}