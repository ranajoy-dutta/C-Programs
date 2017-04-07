#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void insert_middle();
void insert_end();
void delet_middle();
void delet_end();
void delet();
void insert();
void display();

struct node
{
	int info;
	struct node *next;
}*start=NULL;

void main()
{
	char ch='y';
	int a;
	clrscr();
	while(ch=='y'|| ch=='Y')
	{
			printf("\n PRESS 1 FOR INSERTION IN THE START\n");
			printf("\n PRESS 2 FOR INSERTION IN BETWEEN\n");
			printf("\n PRESS 3 FOR INSERTION IN END\n");
			printf("\n PRESS 4 FOR DISPLAY\n");
			printf("\n PRESS 5 FOR DELETION IN THE START\n");
			printf("\n PRESS 6 FOR DELETION IN BETWEEN\n");
			printf("\n PRESS 7 FOR DELETION IN END\n\n");
			printf("\n ENTER YOUR CHOICE:-\t");
			scanf("%d", &a);
			switch(a)
			{
				case 1:
					insert();
					break;
				case 2:
					insert_middle();
					break;
				case 3:
					insert_end();
					break;
				case 4:
					display();
					break;
				case 5:
					delet();
					break;
				case 6:
					delet_middle();
					break;
				case 7:
					delet_end();
					break;
				default:
					printf("\n YOU HAVE ENTERED WRONG CHOICE");
			}
			printf("\n\n DO YOU WANT TO CONTINUE?? Y/N:-\t");
			fflush(stdin);
			scanf("%c",&ch);
	}
	getch();
}


void insert()
{
	struct node *ptr;
	int item;
	printf("\n ENTER THE ELEMENT TO BE INSERTED AT THE START:-\t ");
	scanf("%d", &item);
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->info=item;
	if(start==NULL)
	{
		start=ptr;
		ptr->next=NULL;
	}
	else
	{
		ptr->next=start;
		start=ptr;
	}
}

void insert_middle()
{
	struct node * current, * prev=NULL, *temp;
	int item;
	printf("\n ENTER ELEMENT TO BE INSERTED IN BETWEEN:-\t");
	scanf("%d",&item);
	temp=(struct node *)malloc(sizeof (struct node));
	temp->info=item;
	temp->next=NULL;
	current=start;
	while(current!=NULL)
	{
		if(current->info >=item)
			break;
		prev=current;
		current=current->next;
	}
	if(prev==NULL)
		start=temp;
	else
		prev->next=temp;
		temp->next=current;
		printf("\n ELEMEMT INSERTED IS %d",temp->info);
}

void insert_end()
{
	int item;
	struct node *current, *temp;
	printf("\n ENTER THE ELEMENT TO BE INSERTED AT THE LAST:-\t");
	scanf("%d",&item);
	temp=(struct node*)malloc(sizeof (struct node));
	temp->info=item;
	temp->next=NULL;
	if(start==NULL)
		start=temp;
	else
	{
		current=start;
		while(current->next !=NULL)
		{
			current=current->next;
		}
		current->next=temp;
	}

}

void display()
{
	struct node*temp;
	if(start==NULL)
	{
		printf("\n LIST CONTAINS NO NODE");
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("\n\n ELEMENTS ARE :-\t%d", temp->info);
			temp=temp->next;
		}
	}
}

void delet()
{
	struct node *temp;
	printf("\n \n DELETED ELEMENT IS :-\t%d",start ->info);
	temp=start;
	start=start->next;
	free(temp);
}

void delet_middle()
{
	struct node * current, * prev;
	int item;
	printf("\n ENTER ELEMENT TO BE DELETED:-\t");
	scanf("%d",&item);
	if(start==NULL)
	{
		printf("\n UNDERFLOW");
	}
	current=start;
	if(start->next==NULL)
	{
		start=NULL;
	}
	else
	{
		while(current->info!=item)
		{
			prev=current;
			current=current->next;
		}
		prev->next=current->next;
	}
	printf("\n THE DELETED ELEMENT IS :- %d",current->info);
	free(current);
}

void delet_end()
{
	struct node *current, *prev;
	current=start;
	if(start->next==NULL)
	{
		start=NULL;
	}
	else
	{
		while(current->next!=NULL)
		{
			prev=current;
			current=current->next;
		}
		prev->next=NULL;
	}
	printf("\n NODE DELETED FROM THE LAST IS \t:- %d",current->info);
	free(current);
}
