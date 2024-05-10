#include <stdio.h>

void main()
{
    int a;
    int z;
    int i;
    printf("Enter start of the range\n");
    scanf("%d", &a);
    printf("Enter end of the range\n");
    scanf("%d", &z);
    if (z > a)
    {
        printf("Odd numbers from %d to %d are\n", a, z);
        for (i = a; i <= z; i++)
        {
            if (i % 2 != 0)
                printf("%d\n", i);
        }
    }
}
