#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k,a[10];
	clrscr();
	printf("\nProgrm to Remove Duplicate Values\n");
	printf("\nEnter Number of Elements in Array: ");
	scan	f("%d",&n);
	printf("\nEnter Elements of Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
					--n;
					--j;
			}
		}
	}
	printf("\nAltered Array: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}

