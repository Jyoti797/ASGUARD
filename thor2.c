#include <stdio.h>
// WAP to calculate number of digits of a number input by user

void main()
{
    int n;
    int x;
    printf("Enter a Number\n");
    scanf("%d",&n);
    int numOfDigits(int);
    x = numOfDigits(n);
    printf("This number has %d digits",x);

}
int numOfDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count = count + 1;
        num = num / 10;
    }
    return count;
}