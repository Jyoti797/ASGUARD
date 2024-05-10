#include <stdio.h>

void main()
{
    int i;
    int x[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &x[i]);
    }
    printf("The even numbers are\n");
    for (i = 0; i < 10; i++)
    {
        if (x[i] % 2 == 0)
            printf("%d,", x[i]);
    }
    printf("\nThe Odd numbers are\n");
    for (i = 0; i < 10; i++)
    {
        if (x[i] % 2 != 0)
            printf("%d,", x[i]);
    }
}