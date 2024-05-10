#include <stdio.h>

void main()
{int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    void isPallindrome(int);
    isPallindrome(x);
}
void isPallindrome(int num)
{ int  temp;
temp = num;
    int rem;
    int reverse;
    int sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = 10 * sum + rem;
        temp = temp / 10;
    }
    reverse = sum;
    printf("The reverse number is %d\n", reverse);
    if (num==reverse)
        printf("This is a Pallindrome Number");
    else
        printf("This is not a Pallindrome Number");
}