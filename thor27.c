#include<stdio.h>
//WAP to reverse a string

void main(){
    char x[25];
    void reverse(char *str);
    printf("Enter string\n");
    gets(x);
    reverse(x);
}

void reverse(char *str)
{
    if(*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}