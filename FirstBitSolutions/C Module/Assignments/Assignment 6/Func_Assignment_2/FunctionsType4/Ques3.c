//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
int Greatest(int,int,int);//Declaration
void main() {
	int a,b,c;

	a=80;
	b=20;
	c=30;
	int res=Greatest(a,b,c);//Call
	if(res==1)
			printf("a is greater");
	else if(res==2)
			printf("c is greater");
	else if(res==3)
			printf("a is greater");
	else 
			printf("d is greater");

}//main ends here
int Greatest(int m,int n,int o) {


	if(m>n) {
		if(m>o) {
			return 1;
		} else {
			return 2;
		}
	} else {
		if(n>o) {
			return 3;
		} else {
			return 4;
		}
	}
}//Greatest ends here