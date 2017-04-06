#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i,j,temp,n;
	clrscr();
	printf("\nInsertion Sort");
	printf("\nEnter Size of Array: ");
	scanf("%d",&n);
	printf("\nEnter Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("\nSorted Elements Are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}

