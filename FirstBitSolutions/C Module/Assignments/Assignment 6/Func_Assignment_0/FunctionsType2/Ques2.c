//2. Write a C program to find the area of a circle.
#include <stdio.h>
double Circle();
void main(){
	double res=Circle();
	printf("The area of the circle is %lf",res);
}
double Circle(){
	int r =8;
	double area;
	area = 3.14*r*r;
	return area;
}
