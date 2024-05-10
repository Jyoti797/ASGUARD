#include <stdio.h>
// WAP to print table of a number input by user

void main()
{
    int n, x;
    printf("Enter a number\n");
    scanf("%d", &n);
    void table(int);
    printf("The table of %d is\n", n);
    table(n);
}
void table(int num)
{
    int i, mul;
    for (i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d * %d = %d\n", num, i, mul);
    }
}