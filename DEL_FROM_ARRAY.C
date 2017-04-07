#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{  int a[50],n,loc,num,i;
   clrscr();
   printf("\nEnter the limit of array=");
   scanf("%d",&n);
   printf("\nEnter the elements of array=");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\nEnter the number you want to delete=");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {   if(a[i]==num)
	  loc=i;
   }
   for(i=loc;i<n-1;i++)
       a[i]=a[i+1];
   printf("\nNew array=");
   for(i=0;i<n-1;i++)
     printf("\n%d",a[i]);
   getch();
}

