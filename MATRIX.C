#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
	int a[max][max];          //VARIABLE DECLARATION
	int r,c,i,j;
	clrscr();
	printf("\nENTER NUMBER OF ROWS :: ");
	scanf("%d",&i);
	printf("\nENTER NUMBER OF COLUMNS :: ");
	scanf("%d",&j);
	printf("\nENTER ELEMENTS IN 1ST ROW :: \n");

	for(r=1;r<=i;r++)                     //INSERTING ELEMENTS
	{       printf("ROW %d::  ",r);
		for(c=1;c<=j;c++)
		{
		scanf("%d",&a[r][c]);
		}
	}
	printf("\nMATRIX INSERTED :: \n");     //DISPLAYING INSERTED MATRIX

	for(r=1;r<=i;r++)
	{
		for(c=1;c<=j;c++)
		{
			printf("\t%d  ",a[r][c]);
		}
		printf("\t\n");
	}
	getch();
}


