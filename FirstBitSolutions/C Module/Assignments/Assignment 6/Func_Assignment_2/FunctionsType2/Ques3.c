//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
int Greatest();//Declaration
void main() {
	int res=Greatest();//Call
		if(res==0){
			printf("a is greater");
		}else if(res==1){
			printf("c is greater");
		}else if(res==2){
			printf("a is greater");
		}else{
			printf("c is greater");
		}
}//main ends here
int Greatest() {
	int a,b,c;

	a=80;
	b=20;
	c=30;

	if(a>b) {
		if(a>c) {
			return 0;
		} else {
			return 1;
		}
	} else {
		if(b>c) {
			return 2;
		} else {
			return 1;
		}
	}
}//Greatest ends here