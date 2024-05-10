#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr = (int *)malloc(4*sizeof(int));
    free(ptr);
    ptr = NULL;
    
}