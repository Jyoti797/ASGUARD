#include<stdio.h>

void main(){
    int i;
    for(i=1;i<=20;i++)
    {
        if(i==4)
        continue;
        printf("%d\n",i);
    }
}