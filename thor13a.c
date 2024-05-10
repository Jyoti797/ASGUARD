#include<stdio.h>

void main(){
    int i;
    for(i=2;i<=50;i=i+2)
    {
        if(i==26)
        break;
        else
        printf("%d\n",i);
    }
}