//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void main() {
	int n=689,no,rem,rev=0;
	int temp = n;

	for(1; no>0; no = no / 10) {
		rem = no%10;
		rev = rev*10+rem;

	}
	if(temp == rev) {
		printf("This is Palindrome number");
	} else {
		printf("This is not Palindrome number");
	}

}