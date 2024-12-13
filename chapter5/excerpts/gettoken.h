// ./gettoken.h

/* interface for gettoken.c */

#ifndef GETTOKEN_H
    #define GETTOKEN_H

    /* gettoken(token, tokentype, PARENS, BRACKETS, NAME)
    
    Returns the next token.
    Requires: token is a valid string, tokentype is an integer,
        PARENS, BRACKETS, and NAME are integers.
    Side effects: Modifies token.
    Returns: tokentype.
    */
    int gettoken(char *token, int tokentype, int PARENS, int BRACKETS, int NAME);

#endif