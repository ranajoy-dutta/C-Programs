#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,ch,r,c,x[5][5],y[5][5],z[5][5];
	clrscr();

	printf("\nWelcome To Matrix Program");
	printf("\n\nEnter Number of Rows: ");
	scanf("%d",&r);
	printf("Enter Number of Columns: ");
	scanf("%d",&c);
	printf("\nEnter First Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);    }     }
	printf("\nEnter Second Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&y[i][j]);   }      }

	printf("\n*****MENUE*****");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Transpose");
	printf("\n\nEnter Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("\nSum of Two Matrix:\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%d\t",z[i][j]=x[i][j]+y[i][j]);
				}
				printf("\n");   }     }
		break;

		case 2:
		{
			printf("\nSubtraction of Two Matrix:\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%d\t",z[i][j]=x[i][j]-y[i][j]);
				}
				printf("\n");  }      }
		break;
		case 3:
		{
			printf("\nMultiplication of Two Matrix:\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					z[i][j]=0;
					for(k=0;k<r;k++)
					{
						z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
					}
					printf("%d\t",z[i][j]);
				}
				printf("\n");    }      }
		break;
                    case 4:
		{       printf("\nTranspose of 1st Matrix:\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					printf("%d\t",z[i][j]=x[j][i]);
				}
				printf("\n"); }    }
		break;

		default:
		{
			printf("\nWrong Choice !!!");
			getch();
			exit();   }     }
	getch();
}
