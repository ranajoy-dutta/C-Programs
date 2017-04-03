
//PROGRAM TO IMPLEMENT STACK

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 20
void push();
void pop();
void peek();
int top;
int ch, stack[max];
void main()
{

	clrscr();
	top=-1,ch=1;
	while(ch)
	{
	printf("\n PRESS 1 TO PUSH");
	printf("\n PRESS 2 TO POP");
	printf("\n PRESS 3 TO PEEK");
	printf("\n PRESS 4 TO EXIT");
	printf("\n ENTER YOUR CHOICE :: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		peek();
		break;
	case 4:
		exit(0);
	}
	printf("\n\t =========================\n\n");
	}
	getch();
}

void push()
{
	if (top>max-1)
	{
		printf("\n STACK OVERFLOW");
		return;
	}
	top++;
	int no;
	printf("\n ENTER THE ELEMENT :: ");
	scanf("%d", &no);
	stack[top]=no;

}

void pop()
{
	if (top==-1)
	{
		printf("\n STACK UNDERFLOW");
		return;
	}
	printf("\n TOPMOST ELEMENT DELETED");
	top--;
}

void peek()
{
	if (top==-1)
	printf("\nSTACK IS EMPTY ");
	else
	printf("\n ELEMENT AT THE TOP :: %d", stack[top]);
	getch();
}