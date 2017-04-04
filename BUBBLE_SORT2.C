#include<stdio.h>
#include<conio.h>
void input();
void bub_sort();
void output();
int i,j,n,m;
int a[50];
void main()
{
	clrscr();
	input();
	bub_sort();
	output();
	getch();
}

void input()                 //INSERTING ELEMENTS IN LIST
{

	printf("ENTER MAXIMUM NUMBER OF ELEMENTS :: \n");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS :: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void bub_sort()        //SORTING
{
for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
}
void output()            //DISPLAYING THE RESULT
{
	printf("\nSORTED LIST :: \t");
	for (i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n");
}