//6. Write a C program to find the square and cube of a given number.
#include <stdio.h>
void SquareCube();//Declaration
void main(){
	SquareCube();//call
}//main ends here
void SquareCube(){
	int a = 10;
	int b = 5;
	int Square,Cube;
	
	Square = a*a;
	Cube= b*b*b;
	
	printf("Square of the given number is %d and Cube of the given number is %d",Square,Cube);
}