#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(i=0;i<5;i++)
    printf("%d\n",ptr[i]);
}