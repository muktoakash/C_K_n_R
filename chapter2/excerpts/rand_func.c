#include<stdio.h>
#include<assert.h>

unsigned long int next = 1;

/* rand: return pseudo-random integer on 0..32767 */
int my_rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

/* srand: set seed for rand() */
void my_srand(unsigned int seed)
{
    next = seed;
}

int main()
{
    my_srand(1);
    assert(my_rand() == 16838);
    assert(my_rand() == 5758);
    printf("rand() = %d\n", my_rand());
    printf("rand() = %d\n", my_rand());
}