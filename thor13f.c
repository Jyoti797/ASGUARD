#include<stdio.h>

void main(){
    int i;
    int x[5];
    for(i=0;i<5;i++)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&x[i]);
    }
    printf("The elements of the array are\n");
    for(i=0;i<5;i++)
    printf("%d,",x[i]);
}