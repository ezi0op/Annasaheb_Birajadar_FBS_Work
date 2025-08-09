//8. Write a C program to input the length and width of a rectangle and find its perimeter.
#include <stdio.h>
void Peri();//Declaration
void main()
{
	Peri();//call
}//main ends here
void Peri(){
	int l=5;
	int w=8;
	int Perimeter;
	
	Perimeter = 2*(l+w);
	printf("The Perimeter is %d", Perimeter);
}