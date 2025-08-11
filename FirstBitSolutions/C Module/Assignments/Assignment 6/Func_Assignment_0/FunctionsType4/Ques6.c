//6. Write a C program to find the square and cube of a given number.
#include <stdio.h>
int SquareAndCube(int);
int Cube(int );
void main(){
	int a = 10;
	int b = 5;
	int sq=Square(a);
	int CB=Cube(b);
	printf("Square of the given number is %d and Cube of the given number is %d",sq,CB);
}
int Square(int a){

	
	return a*a;
}
int Cube(int b){
	return b*b*b;
}
