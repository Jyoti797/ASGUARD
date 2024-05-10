#include <stdio.h>

void main()
{
    int n = 20;
    int i;
    int a, b;
    int even(int);
    int odd(int);
    printf("Even numbers between 1 to 20 are\n");
    for (i = 1; i <= n; i++)
        a = even(i);
    printf("\nOdd numbers between 1 to 20 are\n");
    for (i = 1; i <= n; i++)
        b = odd(i);
}
int even(int num)
{
    int y;
    if (num % 2 == 0)
        y = printf("%d,", num);
    return y;
}
int odd(int num)
{
    int z;
    if (num % 2 != 0)
        z = printf("%d,", num);
    return z;
}