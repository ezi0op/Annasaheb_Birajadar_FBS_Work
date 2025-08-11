//4. Write a C program to swap two numbers using a temporary third variable.
#include <stdio.h>
void Swap();//Declaration
void main(){
	Swap();//call
}//main ends here
void Swap(){
	int a =10;
	int b=20;
	int temp;
	temp = a;
	a = b;
	a = temp;
	printf("After swap the two numbers is a=%d and b=%d",b,a);
}