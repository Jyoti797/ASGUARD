#include <stdio.h>

void main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Monday is a working day");
        break;
    case 2:
        printf("Tuseday is a working day");
        break;
    case 3:
        printf("Wednesday is a working day");
        break;
    case 4:
        printf("Thursday is a working day");
        break;
    case 5:
        printf("Friday is a working day");
        break;
    case 6:
        printf("Saturday is a working day");
        break;
    case 7:
        printf("Sunday is a Holiday");
        break;
    }
}