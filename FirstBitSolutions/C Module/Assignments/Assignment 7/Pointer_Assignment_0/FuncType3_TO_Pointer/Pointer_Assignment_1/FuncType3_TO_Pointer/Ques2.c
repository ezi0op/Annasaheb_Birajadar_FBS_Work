//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void Pallindrome(int*,int*);//Declaration
void main(){
	int n=141;
	int fd=n/100;
	int ld=n%10;
	Pallindrome(&fd,&ld);
}//main ends here
void Pallindrome(int* a,int* b){
	if(*a==*b){
		printf("%d and %d Pallindrome",*a,*b);
	}else{
		printf("%d and %d not Pallindrome",*a,*b);
	}
}//Pallindrome ends here