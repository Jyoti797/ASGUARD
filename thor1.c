#include<stdio.h>

//WAP to reverse a number

void main(){
    int n,x;
    printf("Enter a Number\n");
    scanf("%d",&n);
    int reverse(int);
    x = reverse(n);
    printf("The reversed number is %d",x);
    
}

int reverse(int num)
{
    int rem;
    int result = 0;
    while (num>0)
    {
        rem = num%10;
        result = result* 10 + rem;
        num = num/10;
    }
    return result;
}