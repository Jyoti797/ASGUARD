#include <stdio.h>

void main()
{
    char x[25];
    void ulta(char *s);
    void length(char *s);
    printf("Enter a string\n");
    gets(x);
    printf("The reverse string is \n");
    ulta(x);
    printf("\nThe length of the string is\n");
    length(x);
}
void ulta(char *s)
{
    char temp;
    int i;
    int len = 0;
    while (s[len] != '\0')
    {
        len = len + 1;
    }
    for (i = 0; i <= (len - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("%s", s);
    return;
}
void length(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len = len + 1;
    printf("%d", len);
    return;
}