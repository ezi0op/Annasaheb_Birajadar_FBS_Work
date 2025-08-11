//8. Write a C program to input the length and width of a rectangle and find its perimeter.
#include <stdio.h>
void Peri(int,int);
void main()
{
	int l=5;
	int w=8;
	Peri(l,w);
}
void Peri(int l,int w){
	int Perimeter;
	
	Perimeter = 2*(l+w);
	printf("The Perimeter is %d", Perimeter);
}