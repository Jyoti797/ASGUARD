#include <stdio.h>

void main()
{
    int row, col, n;
    int space;
    int totalColsInRow;
    int numOfSpaces;
    n = 10;
    for (row = 1; row <= 2 * n - 1; row++)
    {
        totalColsInRow = row > n ? 2 * (2 * n - row) - 1 : 2 * row - 1;
        numOfSpaces =2 * n - totalColsInRow;
        for (space = 1; space <= numOfSpaces; space++)
            printf(" ");
        for (col = 1; col <= totalColsInRow; col++)
            printf("* ");
        printf("\n");
    }
}
