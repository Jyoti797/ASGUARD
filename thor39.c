#include<stdio.h>

void main(){
    int i;
    char s[20];
    printf("Enter the string\n");
    gets(s);
    for(i=1;i<=20;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
        printf("%c,",s[i]);
        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        printf("%c,",s[i]);
        else
        continue;
    }

}