// *** Program to check if the given number is a palindrome of not ***
#include<stdio.h>
int main()
{
	int n,s=0,m;
	scanf("%d",&n);			//Enter the number to be checked
	m=n;										
	while(n!=0)				//loop to reverse the number
	{
		s=(s*10)+(n%10);	//incrementing s by 1 digit and adding the last digit of n
		n=n/10;				//reducing n by one digit(from right)
	}
	if(m==s)				
		printf("\nPalindrome");
	else
		printf("\n Not a palindrome ");
	return 0;
}
