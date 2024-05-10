#include <stdio.h>

void main()
{
    int i;
    char days[][20] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int attendance[7];
    for (i = 0; i < 7; i++)
    {
        printf("Enter attendance of %s\n", days[i]);
        scanf("%d", &attendance[i]);
    }
    printf("The days are given below on which attendance was greater than 40\n");
    for(i=0;i<7;i++)
    {
        if(attendance[i]>40)
        printf("%s\n",days[i]);
    }
}