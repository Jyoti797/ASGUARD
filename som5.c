#include <stdio.h>

// OR gate

void main()
{
    int i;
    int result;
    int a[4] = {0, 0, 1, 1};
    int b[4] = {0, 1, 0, 1};
    for (i = 0; i < 4; i++)
    {
        if (a[i] == 0 && b[i] == 0)
            result = 0;
        else
            result = 1;
        printf("%d OR %d\t= %d\n", a[i], b[i], result);
    }
}