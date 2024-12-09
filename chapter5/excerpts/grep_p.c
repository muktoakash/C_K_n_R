// ./grep_p.c

#include <stdio.h>
#include <string.h>

#include "grep_p.h"
#include "../../chapter4/excerpts/get_line.h"

/* find: print lines that match pattern from 1st arg */
int grep_p(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while (getline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                found++;
            }
    return found;
}