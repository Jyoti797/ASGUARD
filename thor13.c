#include<stdio.h>

void main(){
    int n = 10;
    int i;
    int sum = 0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum = sum + i;  
    }
    printf("Sum of all the even numbers between 1 to %d is %d",n,sum);
}