//2. Write a C program to find the area of a circle.
#include <stdio.h>
void Area(double ,int );
void main(){
	int r =8;
	double area;
	Area(area,r);
}
void Area(double a,int b){
	a = 3.14*b*b;
	printf("The area of the circle is %lf",a );
}
