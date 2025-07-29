//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void main()
{
	int a = 123;
	
	if(a%100==a%10)
	{
		printf("It is Pallindrome");
	}
	else
	{
		printf("Its is not Pallindrome");
	}
}