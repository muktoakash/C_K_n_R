// ./strcpy_p.c

/* strcpy: copy t to s; array subscript version */
void strcpy_a1(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

/* strpy: copy to to s; pointer version 1*/
void strcpy_p1(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

/* strpy: copy to to s; pointer version 2*/
void strcpy_p2(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

/* strpy: copy to to s; pointer version 3*/
void strcpy_p3(char *s, char *t)
{
    while (*s++ = *t++)
        ;
}