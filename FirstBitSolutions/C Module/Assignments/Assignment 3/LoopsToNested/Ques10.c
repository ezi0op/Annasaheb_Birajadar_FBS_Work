//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main() {
	int no = 12345;
	int ld,sum;

	ld = no % 10;

	for(; no>=10;) {
		no = no /10;

	}
	sum = ld + no;
	printf("Sum of first and last digit of given number is %d",sum);
}