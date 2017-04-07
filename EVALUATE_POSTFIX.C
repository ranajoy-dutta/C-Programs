
#include<stdio.h>
#include<conio.h>
#include<math.h>

void evaluate();
void push(float f);
float pop();

char q[20];
float stack[20];
int top=-1;

void main()
{
	clrscr();
	printf("\nWelcome To Program Of Evaluate Postfix Expression By\n");
	printf("\nEnter Postfix Expression: ");
	gets(q);
	evaluate();
	getch();
}

void evaluate()
{
	float a,b,value[20];
	int i;
	for(i=0;q[i]!='\0';i++)
	{
		if(q[i]>=65 && q[i]<=92)
			{
				fflush(stdin);
				printf("\nEnter The Value Of %c: ",q[i]);
				scanf("%f",&value[i]);
			}
	}
	for(i=0;i<q[i]!='\0';i++)
	{
		if(q[i]>=65 && q[i]<=92)
		{
			push(value[i]);
		}
		else
		{
			b=pop(); /*top element*/
			a=pop(); /*second top*/
			if(q[i]=='^')
				push(pow(a,b));
			else if(q[i]=='/')
				push(a/b);
			else if(q[i]=='*')
				push(a*b);
			else if(q[i]=='+')
				push(a+b);
			else if(q[i]=='-')
				push(a-b);
		}
	}
	printf("\nAnswer After Solvong Postfix Expression %f",stack[top]);
}

void push(float f)
{
	top++;
	stack[top]=f;
}

float pop()
{
	return(stack[top--]);
}

