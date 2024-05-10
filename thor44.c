#include <stdio.h>

void main()
{
    int x[10];
    int i;
    int num;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d",&x[i]);
    }
    printf("Check number\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        if (num == x[i])
            printf("%d is present at %d position in the array\n", num, i);
        else
            continue;
    }
}