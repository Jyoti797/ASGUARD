#include<stdio.h>
#include<stdlib.h>
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

void main()
{
	int choice, item;
	while(1)
	{
		printf("\n\n *CIRCULAR QUEUE*\n ");
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Peek \n");
		printf("4.Display \n");
		printf("5.Quit\n");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:printf("\n Input the element for insertion:");
			       scanf("%d",&item);
			       insert(item);
			       break;
			case 2:printf("\n Element deleted is:%d \n",del());
			       break;
			case 3:printf("\n Element at the front is:%d \n",peek());
			       break;
			case 4:display();
			       break;
			case 5:exit(1);
			default:printf("\n WRONG CHOICE \n");
		}
	}
}
void insert(int item)
{
	if(isFull)
	{
		printf("\n QUEUE OVERFLOW \n");
		return;
	}
	if(front == -1)
		front == 0;

	if(rear == MAX-1)
		rear = 0;
	
	else
		rear = rear + 1;
		cqueue_arr[rear] = item;
}
int del()
{
	int item;
	if(isEmpty())
	{
		printf("\n QUEUE UNDERFLOW \n");
		exit(1);
	}
	item = cqueue_arr[front];
	if(front == rear)
	{
		front == -1;
		rear == -1;
	}
	else if(front == MAX -1)
		front = 0;
	else
		front = front + 1;
	return item;
}
int isEmpty()
{
	if(front == -1)
		return 1;
	else
		return 0;
}
int isFull()
{
	if((front == 0 && rear == MAX - 1)||(front == rear + 1))
		return 1;
	else
		return 0;
}
int peek()
{
	if(isEmpty())
	{
		printf("\n QUEUE UNDERFLOW \n");
		exit(1);
	}
	return cqueue_arr[front];
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("\n Queue is Empty");
		return;
	}
	printf("\n Queue Elements:\n");
	i = front;
	if(front <= rear)
	{
		while(i <= rear)
			printf("%d",cqueue_arr[i++]);
	}
	else
	{
		while(i <= rear)
		{
			printf("%d",cqueue_arr[i++]);
		}
		i=0;
		while(i<=rear)
		{
			printf("%d",cqueue_arr[i++]);
		}
		printf("\n");
	}
}