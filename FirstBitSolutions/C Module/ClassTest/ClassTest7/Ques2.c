//2.Check if the array is pallindrome or not[using funtion]
#include<stdio.h>
int Palindrome(int*,int );
void  main() {
	int a[5]= {1,2,3,2,1};
	int res=Palindrome(a,5);
	if(res==1)
		printf("Array is pallindrome");
	else
		printf("Array is not pallindrome");
}
int Palindrome(int* c,int b) {
	for(int i=0; i<b/2; i++) {
		if(c[i]==c[b-1-i])
			return 1;
	}
}