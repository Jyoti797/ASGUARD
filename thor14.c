#include <stdio.h>

void main()
{
    int num;
    int mul;
    int i;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d * %d = %d\n", num, i, mul);
    }
}