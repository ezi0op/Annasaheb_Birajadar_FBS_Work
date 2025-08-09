//3. Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
#include <stdio.h>
void Temp();//Declaration
void main(){
	Temp();//call
}//main ends here
void Temp(){
		int c =56;
	double f;
	f = (c *1.4) + 32;
	printf("The temp of Fahrenhet is %lf",f );
}
