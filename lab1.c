#include <stdio.h>

#include <stdlib.h>

#define MAX 5

int cqueue_arr[MAX];

int front = -1;

int rear = -1;

void display();

void insert(int item);

int del();

int peek();

int isEmpty();

int isFull();

int main()
{
    int choice,item;

    while (1)

    {

        printf("\n\n** Circular Queue **\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3. Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInput the element for insertion : ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("\nElement deleted is: %d\n", del());
            break;
        case 3:
             printf("\nElement at the front is  : %d\n",);
             break;

case 4:

display(); break;

case 5:

exit(1);

default:

printf("\nWrong choice\n");
        }
    }
    return 0;
}
void insert(int item)

if(isFull())

printf("\nQueue Overflow\n"); return;

} if(front == -1)

front=0;

if(rear--MAX-1)/*rear is at last position of queue*/

rear=0;

else

I

rear=rear+1;

}

cqueue_arr[rear]=item;
int del()

int item;

if( isEmpty() )

{

printf("\nQueue Underflow\n"); exit(1); I

}

item=cqueue_arr[front]; if(front-rear) /* queue has only one element */

front=-1;

rear -1;
} else if(front--MAX-1)

front=0;

else

front-front+1;

return item;

}

int isEmpty()

if(front-=-1)

return 1;

else

I

}

return 0;

int isFull()
