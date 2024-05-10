#include <stdio.h>
#include <stdbool.h>

void main()
{
    int age;
    int marks;
    int x;
    printf("Enter age of the candidate\n");
    scanf("%d", &age);
    printf("Enter marks of the candidate\n");
    scanf("%d", &marks);
    printf("Enter percentage of attendance of the candidate\n");
    scanf("%d", &x);
    bool result = (age > 18 && marks > 50 && x > 75);
    if (result == 1)
        printf("This candidate is eligibile to stand in college election");
    else
        printf("This candidate is not eligibile to stand in college election");
}
