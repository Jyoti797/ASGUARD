#include <stdio.h>

int a = 100;
void main()
{
    int a = 575;
    void externStorage();
    void fun();
    externStorage();
    fun();
    printf("The value of a inside main function is %d\n", a);
}
void externStorage()
{
    extern int a;
    printf("The global value of a is %d\n", a);
}
void fun()
{
    int a = 333;
    printf("The value of a inside fun is %d\n", a);
}
