#include <stdio.h>
void main()
{
    int n = 5;
    int i;
    int phy[n];
    int chem[n];
    int math[n];
    int sum[n];
    float avg[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in Physics of student %d\n", i);
        scanf("%d", &phy[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in Chemistry of student %d\n", i);
        scanf("%d", &chem[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in Math of student %d\n", i);
        scanf("%d", &math[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sum[i] = phy[i] + chem[i] + math[i];
        avg[i] = sum[i]/3;
    }
    for(i=1;i<=n;i++)
    {
        if(avg[i]>60)
        printf("Student %d is passed\n",i);
        else
        printf("Student %d has been failed\n",i);
    }
}