#include <stdio.h>
// WAP to print table of a number input by user

void main()
{
    int n, x, j;
    printf("Enter a number\n");
    scanf("%d", &n);
    int table(int);
    for (j = 1; j <= n; j++)
    {
        printf("The table of %d is\n", j);
        x = table(j);
    }
}
int table(int num)
{
    int i, mul;
    int y;
    for (i = 1; i <= 10; i++)
    {
        mul = num * i;
        y = printf("%d * %d = %d\n", num, i, mul);
    }
    return y;
}