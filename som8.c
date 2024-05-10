#include <stdio.h>
//  XOR gate
void main()
{
    int result;
    int count = 0;
    int i;
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1};
    int b[8] = {0, 0, 1, 1, 0, 0, 1, 1};
    int c[8] = {0, 1, 0, 1, 0, 1, 0, 1};
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 1 && b[i] == 1 & c[i] == 1)
            result = 1;
        else if (a[i] == 0 && b[i] == 0 & c[i] == 0)
            result = 0;
        else if (a[i] == 1 && b[i] == 1)
            result = 0;
        else if (b[i] == 1 && c[i] == 1)
            result = 0;
        else if (c[i] == 1 && a[i] == 1)
            result = 0;
        else
            result = 1;
        printf("%d XOR %d XOR %d  = %d\n", a[i], b[i], c[i], result);
    }
}