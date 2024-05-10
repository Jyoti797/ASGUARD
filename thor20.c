#include<stdio.h>

void main(){
    int i;
    for(i=2;i<=50;i=i+2)
    {
        printf("%d\n",i);
        if(i==26)
        break;
    }
}