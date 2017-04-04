#include <stdio.h>
#include <conio.h>

void main()
{
   int row, c, n, temp;   //VARAIBLE DECLARATION
   clrscr();
   printf("ENTER NUMBER OF ROWS IN PYRAMID :: ");
   scanf("%d",&n);

   temp = n;

   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
	 printf(" ");

      temp--;

      for ( c = 1 ; c <= (2*row - 1) ; c++ )
	 printf("*");

      printf("\n");
   }

   getch();
}