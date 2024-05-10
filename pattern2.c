#include <stdio.h>

void main()
{
    int row, col, n;
    int totalColsInRow;
    n = 15;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        totalColsInRow = row > n ? 2 * n - row : row;
        for (col = 1; col <= totalColsInRow; col++)
            printf("* ");
        printf("\n");
    }
}
