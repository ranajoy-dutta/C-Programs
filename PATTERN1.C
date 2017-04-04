/* OUTPUT PATTERN
*
* *
* * *
* * * *  		*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i,j;
	clrscr();
	printf("HOW MANY LINES STARS (*) SHOULD BE PRINTED? :: ");
	scanf("%d",&x);
	printf("\n\t\tOUTPUT\n\n");
	for (i=0;i<=x;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}
