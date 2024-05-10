#include <stdio.h>

void main()
{
    int n = 20;
    int i;
    printf("Even numbers from 1 to %d are\n", n);
    for (i = 2; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }
     printf("Odd numbers from 1 to %d are\n", n);
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }
}