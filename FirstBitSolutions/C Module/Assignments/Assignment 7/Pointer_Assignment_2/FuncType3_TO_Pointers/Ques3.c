//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void Greatest(int*,int*,int*);//Declaration
void main() {
	int a,b,c;

	a=80;
	b=20;
	c=30;
	Greatest(&a,&b,&c);//Call
}//main ends here
void Greatest(int* m,int* n,int* o) {


	if(*m>*n) {
		if(*m>*o)
			printf("a is greater");
		else
			printf("c is greater");
	} else {
		if(*n>*o)
			printf("a is greater");
		else
			printf("c is greater");
	}
}//Greatest ends here