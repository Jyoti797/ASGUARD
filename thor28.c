#include <stdio.h>
//WAP to reverae a string
void main()
{
    int n = 25;
    char temp;
    char s[n];
    char rev[n];
    int i;
    int len = 0;
    printf("Enter a string\n");
    gets(s);
    while (s[len] != '\0')
    {
        len = len + 1;
    }
    for (i = 0; i < len; i++)
    {
        rev[len-1-i] = s[i];
    }
    for (i = 0; i < len; i++)
        printf("%c", rev[i]);
}