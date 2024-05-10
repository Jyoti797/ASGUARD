#include <stdio.h>

void main()
{
    int count = 0;
    char s[20];
    int i;
    printf("Enter a string\n");
    gets(s);
    for (i = 0; i < 20; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        count = count + 1;
    }
    printf("There are %d vowels present in the string\n",count);
}