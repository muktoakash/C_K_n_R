#include "swap_p1.h"

/* swap: interchange *px and *py */

void swap_p1(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}