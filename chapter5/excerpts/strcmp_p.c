// ./strcmp_p.c

#include <stdio.h>
#include "strcmp_p.h"

/* strcmp: return < 0 if s < t, 0 if s==t, >0 if s > t*/
int strcmp_a1(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

/* pointer version of strcmp */
int strcmp_p1(char *s, char *t)
{
    for ( ; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}