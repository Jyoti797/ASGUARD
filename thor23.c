#include <stdio.h>

void main()
{
    int sum = 0;
    int i;
    int x[5] = {10, 25, 30, 49, 90};
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0)
        {
            printf("%d\n",x[i]);
            sum = sum + x[i];
        }
    
    }
    printf("Sum of even numbers of the array is %d",sum);
}