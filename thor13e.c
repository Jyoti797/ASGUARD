#include<stdio.h>

void main(){
    int i;
    int sum = 0;
    int y;
    int n = 5;
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    goto y;

    y: printf("The sum from 1 to %d is %d",n,sum);

}