#include <stdio.h>

void main()
{
    void area(int, int);
    void perimetere(int, int);
    int a,b;
    printf("Enter length of the rectangle\n");
    scanf("%d",&a);
     printf("Enter breadth of the rectangle\n");
    scanf("%d",&b);
    area(a,b);
    perimetere(a,b);

}
void area(int l, int b)
{
    int a;
    a = l * b;
    printf("Area of the rectangle is %d\n", a);
}
void perimetere(int l, int b)
{
int p;
p = 2 * (l+b);
printf("Perimetere of the rectangle is %d\n",p);

}