//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void main(){
	int n=141;
	int fd=n/100;
	int ld=n%10;
	if(fd==ld){
		printf("%d and %d Pallindrome",fd,ld);
	}else{
		printf("%d and %d not Pallindrome",fd,ld);
	}
}
