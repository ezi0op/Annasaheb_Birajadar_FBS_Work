//1. Write a C program to add two integers and display the result
#include <stdio.h>
int Add();
void main()
{
	int res=Add();
	printf("Sum of two integers is %d",res);
}
int Add(){
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	return c;
}