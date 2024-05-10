#include<stdio.h>
int evenOrOdd(int);
void main(){
    int x[10];
    int num;
    int i;
    for(i=1;i<=10;i++){
        printf("Enter number %d\n",i);
        scanf("%d",&x[i]);
    }

    printf("Check a number\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        if(num==x[i])
        {
            printf("This number is present\n");
            evenOrOdd(num);
        }
    }
}
int evenOrOdd(int num)
{
    if(num%2==0)
    printf("%d is an even number",num);
    else
    printf("%d is an Odd Number",num);
}