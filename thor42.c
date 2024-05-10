#include<stdio.h>

void main(){
    int a, b, result;
    int operater;
    printf("Enter 1st Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Number\n");
    scanf("%d",&b);
    printf("Enter operater\n");
    scanf("%d",&operater);
    switch (operater)
    {
    case 1:
        result = a + b;
        break;
        case 2:
        result = a - b;
        break;
        case 3:
        result = a * b;
        break;
        case 4:
        result = a / b;
        break;
    }
    printf("The result is %d",result);
}