#include <stdio.h>
void main()
{
    int i;
    int check;
    struct student
    {
        char name[300];
        int rollNum;
        int age;
    } x[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter name of the student %d\n", i + 1);
        scanf("%s", &x[i].name);
        printf("Enter roll number of the student %d\n", i + 1);
        scanf("%d", &x[i].rollNum);
        printf("Enter age of the student\n");
        scanf("%d", &x[i].age);
    }
    printf("Check roll number of the student\n");
    scanf("%d", &check);
    for (i = 0; i < 10; i++)
    {
        if ((check==x[i].rollNum))
        {
            printf("Name of the student is %s\n", x[i].name);
            printf("Age of the student is %d\n", x[i].age);
            break;
        }

    }
}