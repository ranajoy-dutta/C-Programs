// Program to find Gross Salary.
#include<stdio.h>
#include<conio.h>
void main()
{
	float gs,hra,ta,da;
	int bs;
	clrscr();
	printf("\n Enter your Salary:");
	scanf("%d",&bs);
	hra = 0.05 * bs;
	da = 0.02 * bs;
	ta = 0.01 * bs;
	gs = hra + da + ta + bs;
	printf("\n Your Gross Salary is %.2f",gs);
	getch();
}