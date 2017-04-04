#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,m;
	int a[50];
	clrscr();
	printf("ENTER MAXIMUM NUMBER OF ELEMENTS :: \n");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS :: \n");
	for (i=0;i<n;i++)                //INSERTING ELEMENTS
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)     //SORTING
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
	printf("\nSORTED LIST :: \t");
	for (i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n");
	getch();
}


