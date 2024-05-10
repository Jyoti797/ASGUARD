#include<stdio.h>
#include<string.h>

void main(){
    char x[30];
  
    printf("Enter a string\n");
    gets(x);
    printf("The length of the string is %d\n",strlen(x));
    printf("The reverse string is %s\n",strrev(x));
  
    
}