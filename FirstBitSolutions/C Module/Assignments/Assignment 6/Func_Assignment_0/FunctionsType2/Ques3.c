//3. Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
#include <stdio.h>
double Temp();
void main(){
	double f=Temp();
	printf("The temp of Fahrenhet is %lf",f );
}
double Temp(){
	int c =56;
	double f;
	return f = (c *1.4) + 32;
}
