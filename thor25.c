#include <stdio.h>

void main()
{
    int count = 0;
    int num;
    int x[5];
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter number %d\n", i);
        scanf("%d", &x[i]);
    }
    printf("Enter a number for search\n");
    scanf("%d", &num);
    for (i = 1; i <= 5; i++)
    {
        if(x[i]%num==0){
            count=count + 1;
        }
        else
        continue; 
    }
    printf("%d is present %d times\n",num,count);
}