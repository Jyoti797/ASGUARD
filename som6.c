#include <stdio.h>

// NAND gate

void main()
{
    int i;
    int result;
    int a[4] = {0, 0, 1, 1};
    int b[4] = {0, 1, 0, 1};
    for (i = 0; i < 4; i++)
    {
        if (a[i] == 1 && b[i] == 1)
            result = 0;
        else
            result = 1;
        printf("%d NAND %d = %d\n", a[i], b[i], result);
    }
}