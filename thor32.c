#include <stdio.h>

void main()
{
    int n = 10;
    int x[n];
    int i;
    int count = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d", &x[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (x[i] % 2 == 0)
            count = count + 1;
    }
    printf("%d even numbers are present in the array",count);
}