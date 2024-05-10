#include<stdio.h>

void main(){
    int x[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter age of Adult %d\n",i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]>=18)
        printf("Adult %d is eligible for voting\n",i+1);
    }
}