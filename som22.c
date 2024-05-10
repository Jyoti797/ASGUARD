#include <stdio.h>

void main()
{
    int i;
    void staticStorage();
    printf("Demonstrating static storage class\n");
    for (i = 0; i < 4; i++)
    {
        staticStorage();
    }
}
void staticStorage()
{
    static int a = 55;
    printf("%d\n", a);
    a = a + 10;
}