#include <stdio.h>
#include <stdlib.h>
// realloc function during run time
void main()
{
    int i;
    int *ptr;
    //allocating space for 2 integer to ptr
    ptr = (int *)malloc(2 * sizeof(int));
    for (i = 0; i < 2; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    //Reallocation of space of 4 integer to integer
    ptr = (int *)realloc(ptr, 4 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available");
        exit(1);
    }
    else
    {
        for (i = 2; i < 4; i++)
        {
            printf("Enter number %d\n", i + 1);
            scanf("%d", &ptr[i]);
        }
    }
    printf("New updated array is \n");
    for (i = 0; i < 4; i++)
        {
            printf("%d\n", ptr[i]);
           
        }
}