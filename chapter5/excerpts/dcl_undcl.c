// ./dcl_undcl.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "dcl_undcl.h"
#include "gettoken.h"

int tokentype; /* type of last token */
char token[MAXTOKEN]; /* last token string */
char name[MAXTOKEN]; /* identifier name */
char datatype[MAXTOKEN]; /* data type = char, int, etc. */
char out[1000]; /* output string */

/* dcl: parse a declarator */

void dcl()
{
    int ns;

    for (ns = 0; gettoken(token, tokentype, PARENS, BRACKETS, NAME) == '*'; ) /* count *'s */
        ns++;
    dirdcl();
    while (ns-- > 0)
        strcat(out, " pointer to");
}

/* dirdcl: parse a direct declarator */
void dirdcl()
{
    int type;

    if (tokentype == '(') { /* ( dcl ) */
        dcl(out);
        if (tokentype != ')')
            printf("error: missing )\n");
    } else if (tokentype == NAME) /* variable name */
        strcpy(out, token);
    else
        printf("error: expected name or (dcl)\n");
}

/* undcl: convert word descriptions to declarations */

void undcl()
{
    int type;
    char temp[MAXTOKEN];

    while (gettoken(token, tokentype, PARENS, BRACKETS, NAME) != EOF) {
        strcpy(out, token);
        while ((type = gettoken(token, tokentype, PARENS, BRACKETS, NAME)) != '\n')
            if (type == PARENS || type == BRACKETS)
                strcat(out, token);
            else if (type == '*')
                sprintf(temp, " pointer to %s", out);
            else if (type == NAME)
                sprintf(temp, "%s %s", token, out);
            else
                printf("invalid input at %s\n", token);
        printf("%s\n", out);
    }
}

int dcl_words() /* convert declaration to words */
{
    while (gettoken(token, tokentype, PARENS, BRACKETS, NAME) != EOF) {
        if (tokentype == NAME) {
            strcpy(datatype, token);
            out[0] = '\0';
            dcl();
            if (tokentype != '\n')
                printf("syntax error\n");
            printf("%s: %s %s\n", name, out, datatype);
        }
    }
    return 0;
}