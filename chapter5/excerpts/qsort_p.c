// ./qsort_p.c
#include <string.h>
#include "swap_p.h"
#include "qsort_p.h"
#include "swap_p.h"

/* qsort: sort v[left] ... v[right] into increasing order */

void qsort_p1(void *v[], int left, int right)
{
    int i, last;
    
    if (left >= right) /* do nothing if array contains */
        return;        /* fewer than two elements */
    swap_p2(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap_p2(v, ++last, i);
    swap_p2(v, left, last);
    qsort_p1(v, left, last-1);
    qsort_p1(v, last+1, right);
}

void qsort_p2(void *v[], int left, int right, 
    int (*comp)(void *, void *))
{
    int i, last;
    
    if (left >= right) /* do nothing if array contains */
        return;        /* fewer than two elements */
    swap_p2(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
        if ((*comp)(v[i], v[left]) < 0)
            swap_p2(v, ++last, i);
    swap_p2(v, left, last);
    qsort_p2(v, left, last-1, comp);
    qsort_p2(v, last+1, right, comp);
}