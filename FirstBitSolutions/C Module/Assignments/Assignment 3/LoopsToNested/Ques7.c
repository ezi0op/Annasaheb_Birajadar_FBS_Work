//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main() {
	int n=5;
	int i,fact=1;
	for(i=n; i>1; i--) {
		fact = fact* i;
	}
	printf("%d is Factorial number %d",n,fact);
}