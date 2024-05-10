#include <stdio.h>
#include <string.h>

void main()
{
    char str1[25];
    char str2[25];
    printf("Enter 1st String\n");
    gets(str1);
    printf("Enter 2nd String\n");
    gets(str2);
    if (strcmp(str1, str2) == 0)
        printf("Yes, Both strings are same");
    else
        printf("No,Both are different strings");
}