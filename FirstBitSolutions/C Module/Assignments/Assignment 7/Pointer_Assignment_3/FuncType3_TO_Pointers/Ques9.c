//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void Palllindrome(int*,int*,int*,int*, int*);  //Declaration
void main() {
	int no,rem,rev=0;
	int n=689;
	int temp = n;
	Palllindrome(&no,&rem,&rev,&n,&temp);//Call
}//main ends here
void Palllindrome(int* a,int* b,int* c,int* d,int* T) {
	while(*a>0) {
		*b = *a % 10;
		*a = *a / 10;
		*c = *c *10 + *b;

	}
	if(*T == *c)
		printf("This is Palindrome number");
	else
		printf("This is not Palindrome number");

}//Pallindrome ends here
