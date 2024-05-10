#include <stdio.h>
// WAP to find a string is pallindrome or not

void main()
{
    void pallindrome(char *s);
    char x[30];
    printf("Enter a string\n");
    gets(x);
    pallindrome(x);
}
void pallindrome(char *s)
{

    int i;
    int len = 0;
    int left = 0;
    int right;
    while (s[len] != '\0')
    {
        len = len + 1;
    }
    right = len - 1;
    while (right > left)
    {
        if (s[left++] != s[right--])
        {
            printf("This is Not a Pallindrome String");
            return;
        }
    }
    printf("This is a Pallindrome String");
    return;
}