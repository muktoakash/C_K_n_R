#include<stdio.h>
#include<assert.h>
#include<string.h>

/* strlen: return length of s */
int my_strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

/* atoi: convert s to integer */
int my_atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower: convert c to lower case; ASCII only */
int my_lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

/* squeeze: delete all c from s */
void my_squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* strcat: concatenate t to end of s; s must be big enough */
void my_strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        ++i;
    while ((s[i++] = t[j++]) != '\0')    /* copy t */
        ;
}

int main()
{
    /* Tests */
    char s[] = "Hello, World!";
    assert(my_strlen(s) == 13);
    assert(my_atoi("123") == 123);
    assert(my_lower('A') == 'a');
    assert(my_lower('Z') == 'z');
    assert(my_lower('a') == 'a');
    assert(my_lower('z') == 'z');
    assert(my_lower(s[0]) == 'h');
    my_squeeze(s, 'l');
    assert(strcmp(s, "Heo, Word!") == 0);
    char t[14] = "lll";
    my_strcat(t, s);
    assert(strcmp(t, "lllHeo, Word!") == 0);
    printf("All tests passed.\n");
    return 0;
}