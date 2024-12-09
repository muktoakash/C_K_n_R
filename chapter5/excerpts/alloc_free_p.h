// ./alloc_free_p.h
/*
Uses buffer of size ALLOCSIZE to allocate memory.
*/

#ifndef ALLOC_FREE_P_H
    #define ALLOC_FREE_P_H

    #define ALLOCSIZE 10000

    /* alloc_p(n)
    Allocates n bytes of memory. Returns a pointer to the first byte. 
    If there is not enough memory, returns NULL.
    Requires: n is a positive integer. 
    Side effects: Allocates memory.
    */
    char *alloc_p(int n);
    
    /* afree_p(p)
    Frees memory pointed to by p.
    Requires: p is a valid pointer.
    Side effects: Frees memory.
    */
    void afree_p(char *p);

#endif