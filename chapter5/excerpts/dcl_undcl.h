// ./dcl_undcl.h

/* interface for dcl_undcl.c */

#ifndef DCL_UNDCL_H
    #define DCL_UNDCL_H

    #define MAXTOKEN 100

    enum { NAME, PARENS, BRACKETS };

    /* dcl()

    Parses a declarator.
    Side effects: Modifies input.
    */

    void dcl();

    /* dirdcl()

    Parses a direct declarator.
    Side effects: Modifies input.
    */

    void dirdcl();

    /* undcl()

    Converts word descriptions to declarations.
    Side effects: Modifies input.
    */

    void undcl();

    /*dcl_words()

    Converts declarations to words.
    Side effects: Modifies input.
    */

    int dcl_words();

#endif