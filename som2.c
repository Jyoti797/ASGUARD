#include <stdio.h>

void main()
{
    int row, col;
    int sum = 0;
    int arr[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
    printf("Sum of element of a row is a follows\n");
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        printf("%d\n", sum);
        sum = 0;
    }
}