#include <stdio.h>

void main()
{   int n = 1;
    int i;
    int sum = 0;
    int avg;
    struct student
    {
        int roll;
        char name[30];
        int age;

    } x[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter roll number of student %d\n", i + 1);
        scanf("%d", &x[i].roll);
        printf("Enter name of student %d\n", i + 1);
        gets(&x[i].name);
        printf("Enter age of student %d\n", i + 1);
        scanf("%d", &x[i].age);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i].age;
    }
    avg = sum/n;
    for(i=0;i<n;i++)
    {
        printf("student %d's roll number is %d\n",x[i].roll);
        puts(x[i].name);
        printf("student %d's age is %d\n",i+1,x[i].age);
    }
}