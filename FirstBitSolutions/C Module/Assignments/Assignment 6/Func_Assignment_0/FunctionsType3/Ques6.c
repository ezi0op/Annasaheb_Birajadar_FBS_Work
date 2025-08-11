//6. Write a C program to find the square and cube of a given number.
#include <stdio.h>
void SquareAndCube(int ,int );
void main(){
	int a = 10;
	int b = 5;
	SquareAndCube(a,b);
}
void SquareAndCube(int a,int b){
	int Square,Cube;
	
	Square = a*a;
	Cube= b*b*b;
	
	printf("Square of the given number is %d and Cube of the given number is %d",Square,Cube);
	
}