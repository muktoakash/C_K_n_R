// ./strcpy_p.h

/* interface for strcpy_p.c*/

#ifndef STRCPY_P_H
    #define STRCPY_P_H

    /* strcpy_a1(s, t)
    
    Copy t to s; array subscript version.
    Requires: s and t are valid strings.
    Side effects: Modifies s.
    */
    void strcpy_a1(char *s, char *t);

    /* strcpy_p1(s, t)
    
    Copy t to s; pointer version 1.
    Requires: s and t are valid strings.
    Side effects: Modifies s.
    */
    void strcpy_p1(char *s, char *t);

    /* strcpy_p2(s, t)
    
    Copy t to s; pointer version 2.
    Requires: s and t are valid strings.
    Side effects: Modifies s.
    */
    void strcpy_p2(char *s, char *t);

    /* strcpy_p3(s, t)
    
    Copy t to s; pointer version 3.
    Requires: s and t are valid strings.
    Side effects: Modifies s.
    */
    void strcpy_p3(char *s, char *t);

#endif