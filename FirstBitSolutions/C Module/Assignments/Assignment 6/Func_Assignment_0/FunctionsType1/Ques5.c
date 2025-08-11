//5. Write a C program to input five numbers and find their average.
#include <stdio.h>
void Avg(); //Declaration
void main()
{
	Avg();//call
}//main ends here
void Avg(){
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int e=60;
	int Average;
	Average=a+b+c+d+e/2;
	
	printf("Average of numbers is %d",Average);
}