#include <stdio.h>

/* shellsort: sort v[0] ... v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap /= 2)
        for(i = gap; i < n; i++)
            for(j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

int main()
{
    int i, n;
    int v[10];

    for(i = 0; i < 10; ++i)
        v[i] = 10 - i;
    n = 10;

    shellsort(v, n);

    for(i = 0; i < 10; ++i)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}