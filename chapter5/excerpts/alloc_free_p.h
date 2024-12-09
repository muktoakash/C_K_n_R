// ./alloc_free_p.h
/*
intereface for alloc_free_p.c
*/

#ifndef ALLOC_FREE_P_H
    #define ALLOC_FREE_P_H

    #define ALLOCSIZE 10000 // Uses buffer of size ALLOCSIZE to allocate memory.

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