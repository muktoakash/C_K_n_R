/* Interface for getch_ungetch.c */

#ifndef GETCH_UNGETCH_H
    #define GETCH_UNGETCH_H

    /* getch()
    
    Returns next character from input.
    Requires: None.
    Side effects: None.
    */
    int getch(void);

    /* ungetch(c)
    
    Pushes c back onto input.
    Requires: c is a character.
    Side effects: Modifies input.
    */
    void ungetch(int c);
#endif