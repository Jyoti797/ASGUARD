#include<stdio.h>

//2 Dimensional array

void main(){
    int i;
    char names[5][15];
    for(i=0;i<5;i++)
    {
        printf("Enter name of student %d\n",i+1);
        gets(names[i]);
    }
    for(i=0;i<5;i++)
    puts(names[i]);
}