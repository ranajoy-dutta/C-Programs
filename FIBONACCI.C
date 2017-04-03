// Program to display fibonacci series.

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,lim,sum,i;
	clrscr();
	printf("Enter a number to define the length of the series: ");
	scanf("%d",&lim);
	a=0;
	b=1;
	printf("\n %d\t%d\t",a,b);
	for(i=1; i<=lim-2; i++)
	{
		sum = a + b;
		printf("%d\t",sum);
		a=b;
		b=sum;
	}
	getch();
}