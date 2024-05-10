#include <stdio.h>

void main()
{
    int x[5];
    int sum = 0;
    int avg;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d\n", i+1);
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 5; i++)
        sum = sum + x[i];
    avg = sum / 5;
    printf("The average of numbers is %d", avg);
}