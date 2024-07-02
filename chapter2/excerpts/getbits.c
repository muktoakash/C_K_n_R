#include<stdio.h>
#include<assert.h>

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

int main()
{
    /* Test */
    unsigned x = 101;
    int p = 4;
    int n = 3;

    assert(getbits(x, p, n) == 1);
    printf("getbits(%u, %d, %d) = %u\n", x, p, n, getbits(x, p, n));
}