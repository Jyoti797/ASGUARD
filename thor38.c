#include <stdio.h>

void main()
{
    int i;
    int x[5];
    for (i = 1; i <= 5; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d", &x[i]);
    }
    printf("First three numbers are as follows\n");
    for (i = 1; i <= 5; i++)
    {
        if (i == 4)
            break;
        else
            printf("%d\n", x[i]);
    }
}