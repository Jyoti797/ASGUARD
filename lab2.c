#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max],i,item,top;
    void PUSH(int[],int);
    void POP(int[]);
    void DISPLAY(int[]);

int main()
{
    int ch;
    while(1)
    {
        printf("\n\n **STACK**\n\n");
        printf("\n 1.PUSH operation");
        printf("\n 2.POP operation");
        printf("\n 3.DISPLAY the element");
        printf("\n 4.EXIT");
        
        printf("\n\n Enter your choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: printf("\n Enter element:");
                    scanf("%d",&item);
                    PUSH(stack,item);
                    break;
            case 2: POP(stack);
                    break;
            case 3: DISPLAY(stack);        
                    break;
            case 4: exit(0);
                    break;
            default: printf("\n\n ---Wrong Choice---\n");
                     break;
        }
    }
    return 0;
}

void PUSH(int stack[],int itm)
{
    if(top==max)
    {
        printf("\n---STACK OVERFLOW---");
    }
    else
    {
       top++;
       stack[top]=itm;
    }
}

void POP(int a[])
{
    if(top==-1)
    {
        printf("\n---STACK UNDERFLOW---");
    }
    else
    {
        printf("\n %d is deleted",stack[top]);
        top--;
    }
}

void DISPLAY(int a[])
{
    int i;
    if(top==0)
    {
        printf("\n--OOPsss,Empty stack---\n");
    }
    else
    {
        printf("\n stack elements are:\t");
        for(i=0;i<top;i++)
        {
          printf("%d\t",a[i]);  
        }
    }
}