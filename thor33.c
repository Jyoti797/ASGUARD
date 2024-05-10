#include<stdio.h>

void main(){
    int n =5;
    int fact = 1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d\n",n,fact);
}