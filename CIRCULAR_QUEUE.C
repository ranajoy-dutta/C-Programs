#include<stdio.h>
#include<conio.h>
#define MAX 50

void enque();
void dequeue();
void display();
int cqueue[MAX],f=-1,r=-1;

void main()
{
	int choice;
	char ch= 'y';
	clrscr();
	while( ch=='y' || ch=='Y')
	{
		printf("\nWelcome To Program of Circular Queue \n");
		printf("\nPress 1 for Insertion\n");
		printf("Press 2 for Deletion\n");
		printf("Press 3 for Display\n");
		printf("\nEnter Your Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				enque();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nWrong Choice !!!");
		}
		printf("\nDo You Want To Continue (Y/N): ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	getch();
}

void enque()
{
	int ele;
	if((f==0 && r==MAX-1) || (f==r+1))
	{
		printf("\nQueue Overflow !!!");
	}
	else
	{
		printf("\nEnter Element You Want To Insert: ");
		scanf("%d",&ele);
		if(f==-1)
		{
			f=0;
			r=0;
		}
		else
		{
			if(r==MAX-1)
				r=0;
			 else
				r=r+1;
		}
		cqueue[r]=ele;
	}
}

void dequeue()
{
	if(f==-1)
	{
		printf("\nQueue Underflow !!!");
	}
	else
	{
		printf("\nDeleted Element Is: %d",cqueue[f]);
		if(f==r)
		{
			r=-1;
			f=-1;
		}
		else
		{
			if(f==MAX-1)
				f=0;
			else
				f=f+1;
		}
	}
}

void display()
{
	int i;
	if(f==-1)
	{
		printf("\nQueue Underflow !!!");
	}
	else
	{
		if(f<=r)
		{
			for(i=f;i<=r;i++)
				printf("\n%d",cqueue[i]);
		}
		else
		{
			for(i=f;i<=MAX-1;i++)
				printf("\n%d",cqueue[i]);
			for(i=0;i<=r;i++)
				printf("\n%d",cqueue[i]);
		}
	}
}

