#include <stdio.h>

void main()
{
    int row, col;
    int n;
    n = 10;
    int i = 10;
    int space;
    for (row = 1; row <= n; row++)
    {
        for (space = n - row; space >= 0; space--)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("%d ", i++);
        printf("\n");
    }
}