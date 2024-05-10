#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int i;
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("Enter size of new array\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter new value %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
        printf("%d\n", ptr[i]);
    free(ptr);
}