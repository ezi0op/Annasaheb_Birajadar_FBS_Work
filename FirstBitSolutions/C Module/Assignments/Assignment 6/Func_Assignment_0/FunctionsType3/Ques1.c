//1. Write a C program to add two integers and display the result
#include <stdio.h>
void Add(int ,int );
void main()
{
	int a,b,c;
	a=10;
	b=20;
	Add(a,b);
}
void Add(int a,int b){
	int c;
	c=a+b;
	printf("Sum of two integers is %d",c);
}