#include<stdio.h>
#include<conio.h>
int main()
{
	float radius, area, circumference;
	const float pi = 3.14;
	clrscr();
	printf("Enter Radius of Circle :: ");
	scanf("%f", &radius);
	area = pi * radius * radius;
	circumference =  2 * pi * radius;
	printf("\nArea =  %f\nCircumference = %f", area, circumference);
	getch();
	return 0;
}