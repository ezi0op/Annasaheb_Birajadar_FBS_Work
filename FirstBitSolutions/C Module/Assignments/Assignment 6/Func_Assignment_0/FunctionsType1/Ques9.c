//9. Write a C program to input the base and height of a triangle and calculate its area.
#include <stdio.h>
void Area();//Declaration
void main()
{
	Area();	//call
}//main ends here
void Area(){
	int b=9;
   int h=7;
   double area;
   
   area = 0.5*b*h;
   printf("Area of the triangle is %f",area);
}