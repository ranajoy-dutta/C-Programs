// Program to calculate Simple Interest.

#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,si;
	clrscr();
	printf("ENTER PRINCIPLE AMOUNT :: ");
	scanf("%f",&p);
	printf("ENTER RATE :: ");
	scanf("%f",&r);
	printf("ENTER TIME :: ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("\n Simple Interest is %.2f",si);
	getch();
}