#include <stdio.h>

void main()
{
    int row, col, n;
    n = 15;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
            printf("%d ", col);
        printf("\n");
    }
}