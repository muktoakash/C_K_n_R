#include<stdio.h>

/* itoa: conver n to characters in s */
void itoa(int n, char s[])
{
    int i, sign;

    if((sign = n) < 0)  /* record sign */
        n = -n;         /* make n positive */
    i = 0;
    do {    /* generate digits in reverse order */
        s[i++] = n % 10 + '0';  /* get next digit */
    } while((n /= 10) > 0);     /* delete it */
    if(sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;

    for(i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main()
{
    char s[100];
    itoa(12345, s);
    printf("%s\n", s); // 12345
    itoa(-12345, s);
    printf("%s\n", s); // -12345
    return 0;
}