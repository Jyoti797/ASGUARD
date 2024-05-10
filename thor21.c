#include <stdio.h>

void main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        sum = sum + i;
    }
    printf("Sum is %d", sum);
}