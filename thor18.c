#include <stdio.h>

void main()
{
    int n = 3;
    int i;
    int phy[n];
    int chem[n];
    int bio[n];
    int math[n];
    int sum[n];
    float avg[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in physics of student %d\n", i);
        scanf("%d", &phy[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in chemistry of student %d\n", i);
        scanf("%d", &chem[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in math of student %d\n", i);
        scanf("%d", &math[i]);
    }
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks in biology of student %d\n", i);
        scanf("%d", &bio[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sum[i] = phy[i] + chem[i] + math[i] + bio[i];
        avg[i] = sum[i] / 4;
    }
    for (i = 1; i <= n; i++){
        printf("Total marks of student %d is %d\n",i, sum[i]);
    }
    
    for (i = 1; i <= n; i++)
    {
        printf("Average marks of student %d is %f\n", i, avg[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (avg[i] >= 90 && avg[i] < 100)
            printf("Student %d has Grade A\n", i);
        else if (avg[i] >= 80 && avg[i] < 90)
            printf("Student %d has Grade B\n", i);
        else if (avg[i] >= 70 && avg[i] < 80)
            printf("Student %d has Grade C\n", i);
        else if (avg[i] >= 60 && avg[i] < 70)
            printf("Student %d has Grade D\n", i);
        else if (avg[i] >= 50 && avg[i] < 60)
            printf("Student %d has Grade E\n", i);
        else if(avg[i]<50)
         printf("Student %d has been Failed in the exam\n",i);
    }
}