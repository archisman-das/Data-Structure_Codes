//Archisman Das,Stream:CSE,Sec-B,2nd Year,3rd SEM,Stream Change//
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
void push(void);
int pop(void);
void display(void);
int stack[MAX],top=-1;
void main()
{
	int n,p;
	while(1)
	{
		printf("Enter 1 to push\n2 to pop\n3 to display\n4 to exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: push();
				    break;
			case 2: p=pop();
				   printf("POP Value is %d",p);
				   break;
			case 3: display();
				    break;
			case 4: exit(0);
			default: printf("Please enter a number between 1 to 4");
				
		}
	}
}
void push(void)
{
	int m;
	if(top== MAX -1)
	printf("STACK OVERFLOW\n");
	else
	{
	printf("Enter a number\n");
	scanf("%d",&m);
	top++;
	stack[top]=m;
	}
}
int pop(void)
{
	int p;
	if(top==-1)
	printf("STACK UNDERFLOW");
	else
	{
		p=stack[top];
		top--;
		return p;
	}
}
void display(void)
{
	int i;
	for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
}