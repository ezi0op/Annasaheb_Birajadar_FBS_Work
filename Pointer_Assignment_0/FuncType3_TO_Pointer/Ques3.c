//3. Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
#include <stdio.h>
void Farh(int*,double*);
void main(){
	int c =56;
	double f;
	Farh(&c,&f);
}
void Farh(int* a,double* b){
		*b = (*a *1.4) + 32;
	printf("The temp of Fahrenhet is %lf",*b );
}
