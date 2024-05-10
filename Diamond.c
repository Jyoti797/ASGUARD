#include <stdio.h>

void main()
{
    int row, col, n;
    int space;
    int totalColsInaRow;
    int spaceInaRow;
    n = 5;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        totalColsInaRow = row > n ? 2 * n - row : row;
        spaceInaRow = n - totalColsInaRow;
        for (space = 1; space <= spaceInaRow; space++)
            printf(" ");
        for (col = 1; col <= totalColsInaRow; col++)
            printf("* ");
        printf("\n");
    }
}