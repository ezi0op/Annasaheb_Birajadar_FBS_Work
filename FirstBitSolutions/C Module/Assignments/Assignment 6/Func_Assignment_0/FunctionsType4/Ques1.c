//1. Write a C program to add two integers and display the result
#include <stdio.h>
int Add(int ,int );
void main()
{
	int a,b,c;
	a=10;
	b=20;
	int res=Add(a,b);
		printf("Sum of two integers is %d",res);
}
int Add(int a,int b){
	return a+b;

}