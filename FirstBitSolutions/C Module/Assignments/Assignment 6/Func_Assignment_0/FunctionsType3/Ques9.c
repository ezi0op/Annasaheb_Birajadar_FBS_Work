//9. Write a C program to input the base and height of a triangle and calculate its area.
#include <stdio.h>
void Area(int ,int );
void main() {
	int b=9;
	int h=7;
	Area(b,h);
}
void Area(int b,int h) {
	double area;

	area = 0.5*b*h;
	printf("Area of the triangle is %f",area);
}