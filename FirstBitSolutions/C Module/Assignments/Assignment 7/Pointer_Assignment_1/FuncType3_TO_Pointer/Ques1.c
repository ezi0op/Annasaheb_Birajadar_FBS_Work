////1. Write a program to check whether a number is even or odd.
#include <stdio.h>
void EvenOdd(int*);//Declaration
void main(){
	int a=7;
	EvenOdd(&a);//Call
}//main ends here
void EvenOdd(int* b){
	if(*b%2==0)
		printf("a is even");	
	else
		printf("a is odd");
}//EvenOdd ends here