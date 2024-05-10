#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The values present inside array is \n");
    for (i = 0; i < 5; i++)
        printf("%d\n", ptr[i]);
}