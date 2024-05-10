#include<stdio.h>

void main(){
    int num;
    int i;
    int count = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
    if(num%i==0)
    count = count + 1;
    }

    if(count==0)
    printf("%d is a Prime Number",num);
    else
    printf("%d is not a Prime Number",num);
}