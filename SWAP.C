#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("ENTER VALUE OF A : ");
    scanf("%d",&a);
    printf("ENTER VALUE OF B : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n VALUES AFTER SWAPPING \n\t A=%d \n\t B=%d",a,b);
    getch();
}
