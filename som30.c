#include<stdio.h>

void main(){
    int x = 5;
    int fact(int num);
    printf("The factorial of %d is %d",x,fact(x));  
}
int fact(int num)
{
    if(num==0)
    return 1;
    else
    return num * fact(num-1);
}