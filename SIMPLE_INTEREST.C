// Program to calculate Simple Interest.

#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,si;					// declaring floating variables	p , r , t , si;	 
	clrscr();
	printf("ENTER PRINCIPLE AMOUNT :: ");
	scanf("%f",&p);					//Input principle amount in variable p .
	printf("ENTER RATE :: ");
	scanf("%f",&r);					//Input rate in variable say r.
	printf("ENTER TIME :: ");
	scanf("%f",&t);					// Input time in variable say t.
	si=(p*r*t)/100;					//Find simple interest using formula si=(p*r*t)/100.
	printf("\n Simple Interest is %.2f",si); 	// Printing output of simpe interest 
	getch();
}
