// ./swap_p.c
#include "swap_p.h"

/* swap: interchange *px and *py */

void swap_p1(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

/* swap: interchange v[i] and v[j] */
void swap_p2(void *v[], int i, int j)
{
    void *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}   