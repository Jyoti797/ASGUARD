#include <stdio.h>
void main()
{
    int i;
    int sum = 0;
    float avg;
    struct student
    {
        char name[300];
        int rollNum;
        int age;
    }x[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter name of the student %d\n", i + 1);
        scanf("%s",&x[i].name);
        printf("Enter roll number of the student %d\n", i + 1);
        scanf("%d", &x[i].rollNum);
        printf("Enter age of the student\n");
        scanf("%d", &x[i].age);
    }
    for(i=0;i<10;i++)
    {
        sum = sum + x[i].age;
        avg = sum/10;
    }
    for (i = 0; i < 10; i++)
    {   printf("Details of Student %d is\n",i+1);
        printf("%s",x[i].name);
        printf("\nRoll number is %d\n", x[i].rollNum);
    }
    printf("\nAverage age of 10 students is %d",avg);
}