/* Interface for qsort.c */
#ifndef QSORT_H
    #define QSORT_H

    #include "swap.h"

    /* qsort(v[], left, right)
    
    Sorts v[left]...v[right] into increasing order.
    Requires: v is an array of integers, left and right are valid indices.
    Side effects: Modifies v.
    */
    void qsort(int v[], int left, int right);
#endif