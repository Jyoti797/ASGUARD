#include<stdio.h>

void main(){
    int row, col;
    printf("Enter number of rows\n");
    scanf("%d",&row);
    printf("Enter number of coloumns\n");
    scanf("%d",&col);
    int matrix[col][row];
    int i,j;
    printf("Enter elements of matrix\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The entered matrix is \n");
    for(i=0; i<col;i++){
        for(j=0;j<row; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}