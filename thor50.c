#include<stdio.h>

void main(){
    int i;
    int check;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Check Number\n");
    scanf("%d",&check);
    for(i=0;i<10;i++)
    {
        if(check==arr[i])
        printf("%d is present at %dth position",check,i+1);
    }
}