#include<stdio.h>


void main(){
    int row,col;
    int matrix[3][3];

    printf("Enter matrix elemenmts\n");
    for(row=0;row<3; row++)
    {
        for(col=0;col<3;col++)
        {   printf("matrix[%d][%d]",row,col);
            scanf("%d",&matrix[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }

}