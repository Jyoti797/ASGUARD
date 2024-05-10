#include<stdio.h>

void main(){
    int i;
    int sum = 0;
    int x[5] = { 10,25,30,49,90};
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0)
        sum = sum + x[i];
    }
    printf("The of even numbers inside the array is %d",sum);

}