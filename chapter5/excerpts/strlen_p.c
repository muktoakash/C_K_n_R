/*strlen: return the length of string s*/

int strlen_p1(char *s)
{
    int n;

   for (m = 0; *s != '\0'; s++)
        n++;
    return n;
}

int strlen_p2(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;
    return p - s;
}   