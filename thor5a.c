#include <stdio.h>
#include<stdbool.h>
//WAP to check prime numbers from 1 to
void main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    void checkPrime(int);
        checkPrime(n);
}
void checkPrime(int num)
{
    int i;
    int count = 0;
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            count++;
    }
    bool result = (count>=1 );
    if (result==0)
 printf("%d is a Prime Number",num);
}