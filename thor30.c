#include <stdio.h>
void length(char *s);

void main()
{ char x[30];
    printf("Enter a string\n");
    gets(x);
    length(x);
}
void length(char *s)
{
    int i;
    int len = 0;
    while (s[len] != '\0')
    {
        len = len + 1;
    }
    printf("The length of the string is %d",len);
}