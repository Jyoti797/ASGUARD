#include<stdio.h>
#include<string.h>

void main(){
    char x[25];
    printf("Enter a string\n");
    gets(x);
    printf("Length of the entered string is %d",strlen(x));
    
}