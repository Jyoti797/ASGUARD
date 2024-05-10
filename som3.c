#include <stdio.h>

void main()
{
    int sum = 0;
    int i, row, col;
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    printf("Sum of elements of a coloumn is\n");
    for (col = 0; col < 5; col++)
    {
        for (row = 1; row < 5; row++)
        {
            sum = sum + arr[row][col];
        }
        printf("%d\t", sum);
        sum = 0;
    }
}