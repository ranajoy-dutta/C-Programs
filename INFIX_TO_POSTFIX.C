#include<stdio.h>
#include<conio.h>
#define MAX 50

char stack[50];
int top=-1;

void in_to_post(char infix[]);
void push(char);
char pop();

void main()
{
	char infix[25];
	clrscr();
	printf("\nWelcome To Infix To Postfix Program By\n");
	printf("\nEnter Infix Expression: ");
	gets(infix);
	in_to_post(infix);
	getch();
}

void push(char symb)
{
	if(top>=49)
	{
		printf("\nStack Overflow !!!");
		getch();
		return;
	}
	else
	{
		top=top+1;
		stack[top]=symb;
	}
}

char pop()
{
	char item;
	if(top==-1)
	{
		printf("\nStack Empty !!!");
		getch();
		return (0);
	}
	else
	{
		item=stack[top];
		top--;
	}
	return item;   }

int preced(char ch)
{
	switch(ch)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;    }      }

void in_to_post(char infix[])
{
	int length;
	static int i=0,pos=0;
	char symbol,temp;
	char postfix[40];
	length=strlen(infix);
	push('(');
	while(i<length)
	{
		symbol=infix[i];
		switch(symbol)
		{
			case '(':
				push(symbol);
				break;
			case ')':
				temp=pop();
				while(temp!='(')
				{
					postfix[pos]=temp;
					pos++;
					temp=pop();      }
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while(preced(stack[top])>=preced(symbol))
				{
					temp=pop();
					postfix[pos]=temp;
					pos++;
				}
				push(symbol);
				break;
			default:
				postfix[pos++]=symbol;
				break;
		}
		i++;    }
	while(top>0)
	{
		temp=pop();
		postfix[pos++]=temp;     }
	postfix[pos++]='\0';
	printf("\nAfter Converting Infix To Postfix Expression: ");
	puts(postfix);
	return;  }
