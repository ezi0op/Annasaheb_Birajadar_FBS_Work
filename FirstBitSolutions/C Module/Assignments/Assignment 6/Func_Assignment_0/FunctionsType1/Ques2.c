//2. Write a C program to find the area of a circle.
#include <stdio.h>
void Area();//Declaration
void main(){
	Area();//call
}//main ends here
void Area(){
	int r =8;
	double area;
	area = 3.14*r*r;
	printf("The area of the circle is %lf",area );
}
