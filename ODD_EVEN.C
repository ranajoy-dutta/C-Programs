#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n ENTER THE NUMBER :: ");
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("\n ENTERED NUMBER IS EVEN");
	}
	else
	{
		printf("\n ENTERED NUMBER IS ODD");
	}
	getch();
}


