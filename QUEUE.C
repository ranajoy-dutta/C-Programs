#include<stdio.h>
#include<conio.h>
#define MAX 50

void insert_queue();
void delete_queue();
void display();
int queue[MAX],f=-1,r=-1;

void main()
{
	int choice;
	char ch= 'y';
	clrscr();
	printf("\nWelcome To Program of Queue \n");
	while(ch=='y' || ch=='Y')
	{
		printf("\n1. Insertion");
		printf("\n2. Deletion");
		printf("\n3. Display");
		printf("\n\nEnter Your Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				insert_queue();
				break;
			case 2:
				delete_queue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\n Wrong Choice !!!");
		 }
		 printf("\n\nDo You Want To Continue (Y/N): ");
		 fflush(stdin);
		 scanf("%c",&ch);
	}
	getch();
}

void insert_queue()
{
	int ele;
	printf("\nEnter Element You Want To Insert: ");
	scanf("%d",&ele);
	if(r==MAX-1)
	{
		printf("\nQueue Overflow");
	}
	else
	{
		if(f==-1)
		{
			f=0;
			r=0;
		}
		else
		{
			r=r+1;
		}
		queue[r]=ele;
	}
}

void delete_queue()
{
	if(f==-1)
	{
		printf("\nQueue Underflow");
	}
	else
	{
		printf("\nDeleted Element Is: %d",queue[f]);
		f=f+1;
	}
}

void display()
{
	int i;
	if(f==-1)
	{
		printf("\nQueue Underflow");
	}
	else
	{
		for(i=f;i<=r;i++)
			printf("\n%d",queue[i]);   }     }

