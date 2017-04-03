// Program to find the area of the rectangle.

#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,ar;
	clrscr();
	printf("\nEnter the Length of the Rectangle:");
	scanf("%d",&l);
	printf("\nEnter the Breadth of the  Rectangle:");
	scanf("%d",&b);
	ar=l*b;
	printf("\nArea of the Rectangle is %d",ar);
	getch();
}