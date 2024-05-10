#include <stdio.h>

void main()
{
    int row, col, n;
    int space;
    int totalColsinaRow;
    int spacesInaRow;
    n = 8;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        totalColsinaRow = row > n ? 2 * n - row : row;
        spacesInaRow = n - totalColsinaRow;

        for (space = 1; space <= spacesInaRow; space++)
            printf("  ");
        for (col = totalColsinaRow; col >= 1; col--)
            printf("%d ", col);
        for (col = 2; col <= totalColsinaRow; col++)
            printf("%d ", col);
        printf("\n");
    }
}