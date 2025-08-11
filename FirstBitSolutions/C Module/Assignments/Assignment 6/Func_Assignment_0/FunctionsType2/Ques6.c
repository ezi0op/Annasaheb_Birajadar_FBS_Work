//6. Write a C program to find the square and cube of a given number.
#include <stdio.h>
int Sqrt();
int cube();
void main(){
	int Square=Sqrt();
	int Cube=cube();
	
	printf("Square of the given number is %d and Cube of the given number is %d",Square,Cube);
	
}
int Sqrt(){
	int a = 10;
	int b = 5;
	return a*a;
}
int cube(){
	int a = 10;
	int b = 5;
	return b*b*b;
}