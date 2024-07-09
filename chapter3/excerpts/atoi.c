#include <ctype.h>
#include <stdio.h>

/* atoi: convert s to integer: version 2 */
int atoi(char s[])
{
    int i, n, sign;

    for(i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-') /* skip sign */
        i++;
    for(n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}

int main()
{
    char s[] = "  -123";
    printf("%d\n", atoi(s)); // -123

    char s2[] = "  123";
    printf("%d\n", atoi(s2)); // 123

    char s3[] = "";
    printf("%d\n", atoi(s3)); // 0

    char s4[] = "  123abc";
    printf("%d\n", atoi(s4)); // 123

    char s5[] = "  123 456";
    printf("%d\n", atoi(s5)); // 123

    char s6[] = "-0";
    printf("%d\n", atoi(s6)); // 0

    char s7[] = "0";
    printf("%d\n", atoi(s7)); // 0

    char s8[] = "  0";
    printf("%d\n", atoi(s8)); // 0

    char s9[] = "  0  ";
    printf("%d\n", atoi(s9)); // 0

    char s10[] = "  0  1";
    printf("%d\n", atoi(s10)); // 0

    char s11[] = "  1 0 ";
    printf("%d\n", atoi(s11)); // 1

    char s12[] = " - 1 0  ";
    printf("%d\n", atoi(s12)); // 0    
    return 0;
}