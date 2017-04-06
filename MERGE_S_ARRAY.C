#include<stdio.h>
#include<conio.h>
void main()
{   int a[20],b[20],c[20],i=0,j=0,k=0,m,n;
    clrscr();
    printf("\nEnter the number of elements for 1st array=");
    scanf("%d",&m);
    printf("\nEnter the elements for 1st array=");
    for(i=0;i<m;i++)
     scanf("%d",&a[i]);
    printf("\nEnter the number of elements for 2nd array=");
    scanf("%d",&n);
    printf("\nEnter the elements for 2nd array=");
    for(j=0;j<n;j++)
     scanf("%d",&b[j]);
    i=0; j=0;
    printf("\nAfter combining two sorted array=");
    while(i<m && j<n)
    {  if(a[i]<=b[j])
       {  c[k]=a[i]; 
k++; i++;
       }
       else
       {  c[k]=b[j];
	  k++; j++;
       }
    }
    if(i>=m)
    {  while(j<n)
       {  c[k]=b[j];
	  j++; k++;
       }
    }
    else
    {  while(i<n)
       {  c[k]=a[i];
	  i++; k++;
       }
    }
    for(k=0;k<(m+n);k++)
      printf("\n%d",c[k]);
    getch();
}

