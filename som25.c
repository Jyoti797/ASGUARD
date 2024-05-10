#include <stdio.h>
#include <stdlib.h>
//malloc function
void main()
{
    int i;
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(int));
    for (i = 0; i < 4; i++)
    {
        printf("Enter number %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The value of inside array  is \n");
    for (i = 0; i < 4; i++)
        printf("%d\n", ptr[i]);
}