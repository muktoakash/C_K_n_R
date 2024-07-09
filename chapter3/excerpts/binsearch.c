#include<stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid - 1;
        else if(x > v[mid])
            low = mid + 1;
        else    /* found match */
            return mid;
    }
    return -1;  /* no match */
}

main()
{
    int i, n;
    int v[10];

    for(i = 0; i < 10; ++i)
        v[i] = i;
    n = 10;

    printf("%d\n", binsearch(5, v, n)); // 5
    printf("%d\n", binsearch(10, v, n)); // -1
    printf("%d\n", binsearch(0, v, n)); // 0
    printf("%d\n", binsearch(9, v, n)); // 9
    printf("%d\n", binsearch(1, v, n)); // 1
    printf("%d\n", binsearch(8, v, n)); // 8
    return 0;
}