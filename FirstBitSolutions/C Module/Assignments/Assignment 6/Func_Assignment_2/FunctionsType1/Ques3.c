//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void Greatest();//Declaration
void main() {
	Greatest();//Call
}//main ends here
void Greatest() {
	int a,b,c;

	a=80;
	b=20;
	c=30;

	if(a>b) {
		if(a>c) {
			printf("a is greater");
		} else {
			printf("c is greater");
		}
	} else {
		if(b>c) {
			printf("a is greater");
		} else {
			printf("c is greater");
		}
	}
}//Greatest ends here