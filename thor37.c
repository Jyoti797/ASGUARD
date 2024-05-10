#include <stdio.h>
#include <math.h>

void main()
{
    int n = 5;
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i,2);
    }
    printf("Sum of the square of the numbers from 1 to %d is %d\n",n,sum);
}