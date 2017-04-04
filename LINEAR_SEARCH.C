#include <stdio.h>
#include <conio.h>
#define max 100
void main()
{
   int array[max], search, c, n;
   clrscr();
   printf("ENTER THE NUMBER OF ELEMENTS :: ");
   scanf("%d",&n);

   printf("\nENTER THE ELEMENTS :: \n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("\nENTER THE ITEM TO BE SEARCHED :: \n");
   scanf("%d", &search);

   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element is found */
      {
	 printf("\n%d IS PRESENT AT LOCATION %d.\n", search, c+1);
	 break;
      }
   }
   if (c == n)
      printf("\n%d IS NOT PRESENT IN THE ARRAY \n", search);

   getch();
}
