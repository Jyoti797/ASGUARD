#include <stdio.h>

void main()
{
    int i, r;
    int n = 21;
    for (i = 1; i < n; i++)
    {
        if (i == 4)
            continue;
        else
        {
            r = i % n;
            printf("%d\n", r);
        }
    }
}