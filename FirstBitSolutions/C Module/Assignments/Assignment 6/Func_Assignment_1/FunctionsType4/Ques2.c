//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
int Pallindrome(int,int);//Declaration
void main(){
	int n=141;
	int fd=n/100;
	int ld=n%10;
	int res=Pallindrome(fd,ld);
	if(res)
		printf("%d and %d Pallindrome",fd,ld);
	else
		printf("%d and %d not Pallindrome",fd,ld);
}//main ends here
int Pallindrome(int a,int b){
	return a==b;
}//Pallindrome ends here