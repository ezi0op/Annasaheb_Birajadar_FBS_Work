//2. Write a C program to find the area of a circle.
#include <stdio.h>
void Area(double* ,int* );
void main(){
	int r =8;
	double area;
	Area(&area,&r);
}
void Area(double* x,int* y){
	*x = 3.14**y**y;
	printf("The area of the circle is %lf",*x );
}
