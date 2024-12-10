//Name:Archisman Das,Stream:Computer Science & Engineering,Section-B,University Roll:10900220058//
//Write a menu driven program to implement Insert, Delete and Display operations in a Linear Queue using array.//
#include<stdio.h>
#define MAX 20
int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_ele(void);
void display(void);
int main()
{
	int option, val;
	do
	{
		printf("\n*****MENU******\n");
		printf("\n 1.Insert an element\n");
		printf("\n 2.Delete an element\n");
		printf("\n 3.Display the queue\n");
		printf("\n 4.EXIT\n");
		printf("\n Enter your option:\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				val = delete_ele();
				if(val!=-1)
				printf("\n The number deleted is: %d",val);
				break;
			case 3:
				display();
				break;
		}
	}while(option!=4);
	return 0;
}
void insert()
{
	int num;
	printf("\n Enter the number to be inserted in the queue:");
	scanf("%d",&num);
	if(rear == MAX-1)
	printf("\nOVERFLOW");
	else if(front == -1 && rear == -1)
	front = rear = 0;
	else
	rear++;
	queue[rear] = num;
}
int delete_ele()
{
	int val;
	if(front == -1 || front>rear)
	{
		printf("\nUNDERFLOW");
		return -1;
	}
	else
	{
		val = queue[front];
		front++;
		if(front>rear)
		front = rear = -1;
		return val;
	}
}
void display()
{
	int i;
	printf("\n");
	if(front == -1 || front>rear)
	printf("\nQueue is Empty...");
	else
	{
		for(i=front;i<=rear;i++)
		printf("\t %d",queue[i]);
	}
}