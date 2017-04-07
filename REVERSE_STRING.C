#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[20];
int top=-1;

void push(char);
char pop();

void main()
{
	char str[20],ch;
	int l,i;
	clrscr();
	printf("Welcome to string reverse program\n");
	printf("\nEnter string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
		push(str[i]);
	printf("\nReversed string:");
	for(i=0;i<l;i++)
	{
		ch=pop();
		printf("%c",ch);
	}
	getch();
}
void push(char c)
{
	top++;
	stack[top]=c;
}

char pop()
{
	char c;
	c=stack[top];
	top--;
	return c;  }
