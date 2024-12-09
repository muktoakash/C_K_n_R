// ./echo_p.c

#include <stdio.h>
#include "echo_p.h"

/* echo: echo commenat-line arguments; first version */
int echo_p1(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc-1) ? " " : "");
    printf("\n");
    return 0;
}

/* echo: command-line arguments; 2nd version */
int echo_p2(int argc, char *argv[])
{
    while (--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    printf("\n");
    return 0;
}