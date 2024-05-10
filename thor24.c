#include <stdio.h>

void main()
{
    int n = 10;
    int x[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d", &x[i]);
    }
    printf("Even numbers are\n");
    for (i = 1; i <= n; i++)
    {
        if(x[i]%2==0)
        printf("%d\n",x[i]);
    }
      printf("Odd numbers are\n");
    for (i = 1; i <= n; i++)
    {
        if(x[i]%2!=0)
        printf("%d\n",x[i]);
    }
}