#include <stdio.h>

void main()
{
    int i;
    char names[5][25];
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of the student %d\n",i+1);
        gets(names[i]);
    }
    for(i=0;i<5;i++)
    puts(names[i]);
}