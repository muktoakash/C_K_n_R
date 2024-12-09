// ./swap_p.h
/* Interface for swap_p1.c */

#ifndef SWAP_H
    #define SWAP_H

    /* swap_p1(*px, *py)
    
    Swaps *px and *py.
    Requires: px and py ware valid pointers.
    Side effects: Modifies *px and *py.
    */
    void swap_p1(int *px, int *py);

    /* swap_p2(v[], i, j)
    
    Swaps v[i] and v[j].
    Requires: v is an array of integers, i and j are valid indices.
    Side effects: Modifies v.
    */
    void swap_p2(void *v[], int i, int j);
    
#endif