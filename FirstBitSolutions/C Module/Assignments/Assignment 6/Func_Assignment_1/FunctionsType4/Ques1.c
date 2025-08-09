////1. Write a program to check whether a number is even or odd.
#include <stdio.h>
int EvenOdd(int);//Declaration
void main(){
	int a=7;
	int res=EvenOdd(a);//Call
	if(res==0)
		printf("a is even");	
	else
		printf("a is odd");
}//main ends here
int EvenOdd(int b){
	return b%2;

}//EvenOdd ends here