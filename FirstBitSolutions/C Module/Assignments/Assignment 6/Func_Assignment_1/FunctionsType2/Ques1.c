//1. Write a program to check whether a number is even or odd.
#include <stdio.h>
int EvenOdd();//Declaration
void main(){
	int res=EvenOdd();//Call
	if(res==0)
		printf("Even");
	else
		printf("Odd");
	
}//main ends here
int EvenOdd(){
	int no=7;
	return no%2;
	
}//EvenOdd ends here
