//3. Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
#include <stdio.h>
double Farh(int,double);
void main(){
	int c =56;
	double f;
	double res=Farh(c,f);
		printf("The temp of Fahrenhet is %lf",res );
}
double Farh(int a,double b){
	return	b = (a *1.4) + 32;

}
