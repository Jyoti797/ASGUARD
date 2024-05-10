#include <stdio.h>

void main()
{
    int i;
    void autoStorage();
    printf("Demonstrating auto storage class\n");
    for (i = 0; i < 4; i++)
    {
        autoStorage();
    }
}
void autoStorage()
{
    auto int a = 55;
    printf("%d\n", a);
    a = a + 10;
}