
#include<stdio.h>
#include<conio.h>
void display(int a[5][5],int r,int c);
void main()
{
	int a[5][5]={0},r,c,i,j,ch;
	clrscr();
	printf("\nWelcome To Sparse Matrix Program\n");
	printf("\nEnter Number of Rows: ");
	scanf("%d",&r);
	printf("Enter Number of Columns: ");
	scanf("%d",&c);
	printf("\n1. Upper Right Triangular Matrix");
	printf("\n2. Upper Left Triangular Matrix");
	printf("\n3. Lower Right Triangular Matrix");
	printf("\n4. Lower Left Triangular Matrix");
	printf("\n\nEnter Your Choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			printf("\nEnter Elements for Matrix:\n");
			for(i=0;i<r;i++)
				for(j=0;j<c;j++)
					if(j>=i)
						scanf("%d",&a[i][j]);
			printf("\nUpper Right Triangular Matrix:\n");
			display(a,r,c);
			break;

		case 2:
			printf("\nEnter Elements for Matrix:\n");
			for(i=0;i<r;i++)
				for(j=0;j<c-i;j++)
					scanf("%d",&a[i][j]);
			printf("\nUpper Left Triangular Matrix:\n");
			display(a,r,c);
			break;

		case 3:
			printf("\nEnter Elements for Matrix:\n");
			for(i=0;i<r;i++)
				for(j=0;j<c;j++)
					scanf("%d",&a[i][j]);
			for(i=0;i<r;i++)
				for(j=0;j<c-i-1;j++)
					a[i][j]=0;
			printf("\nLower Right Triangular Matrix:\n");
			display(a,r,c);
			break;

		case 4:
			printf("\nEnter Elements for Matrix:\n");
			for(i=0;i<r;i++)
				for(j=0;j<c;j++)
					if(j<=i)
						scanf("%d",&a[i][j]);
			printf("\nLower Left Triangular Matrix:\n");
			display(a,r,c);
			break;

		default:
			printf("\nWrong Choice !!!");
	}
	getch();
}
void display(int a[5][5],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
}
