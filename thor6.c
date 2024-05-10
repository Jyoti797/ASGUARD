#include <stdio.h>
//WAP to calculate factorial of a Number
void main()
{
    int n;
    int x;
    printf("Enter a number\n");
    scanf("%d", &n);
    int isFactorial(int);
    x = isFactorial(n);
    printf("Fcatorial of %d is %d\n",n,x);

}
int isFactorial(int num)
{
    int i;
    int fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}