#include <stdio.h>

void main()
{
    int i;
    char name[5][25];
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of student %d\n", i + 1);
        gets(name[i]);
    }
    for (i = 0; i < 5; i++)
    {
        puts(name[i]);
    }
}