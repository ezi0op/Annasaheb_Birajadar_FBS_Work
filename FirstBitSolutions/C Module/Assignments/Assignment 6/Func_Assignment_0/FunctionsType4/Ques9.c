//9. Write a C program to input the base and height of a triangle and calculate its area.
#include <stdio.h>
double Area(int ,int );
void main() {
	int b=9;
	int h=7;
	int res=Area(b,h);
		printf("Area of the triangle is %f",res);
}
double Area(int b,int h) {


	return	0.5*b*h;

}