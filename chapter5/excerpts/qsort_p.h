// ./qsort_p.h

/* interface for qsort_p.c */

#ifndef QSORT_P_H
    #define QSORT_P_H

    #include "swap_p.h"

    /* qsort_p1(v[], left, right)
    
    Sorts v[left]...v[right] into increasing order.
    Requires: v is an array of pointers, left and right are valid indices.
    Side effects: Modifies v.
    */
    void qsort_p1(void *v[], int left, int right);
#endif