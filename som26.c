#include <stdio.h>
#include <stdlib.h>
//malloc function during run time
void main()
{
    int i,n;
    int *ptr;
    printf("Enter range of array\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The valu of inside array  is \n");
    for (i = 0; i < n; i++)
        printf("%d\n", ptr[i]);
   
}