//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
int Pallindrome();//Declaration
void main(){
	int res=Pallindrome();//call
	if(res==1)
		printf("Pallindrome");
	else 
		printf("Not Pallindrome");
}//main ends here
int Pallindrome(){
	int n=121;
	int fd=n/100;
	int ld=n%10;
	if(fd==ld)
		return 1;
	else
		return 0;

}//Pallindrome ends here