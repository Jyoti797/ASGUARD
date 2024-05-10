#include<stdio.h>
#include<stdbool.h>
//WAP to check prime numbers from 1 to
void main()
{
    int n, x, range;
    printf("Enter a Range\n");
    scanf("%d", &n);
    int isPrime(int);
    printf("Prime numbers till %d are\n",n);
    for(range=2;range<=n;range++)
    {
        x = isPrime(range);
    }
}
int isPrime(int num)
{
    int i;
    int y;
    int count = 0;
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            count++;
    }
    bool result = (count>=1 );
    if (result==0)
        y = printf("%d,", num);
    return y;
}