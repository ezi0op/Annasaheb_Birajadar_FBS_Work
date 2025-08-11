//1. Write a C program to add two integers and display the result
#include <stdio.h>
void Sum();//Declaration
void main()
{
	Sum();//call
}//main ends here
void Sum(){
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	printf("Sum of two integers is %d",c);
}//Sum ends here