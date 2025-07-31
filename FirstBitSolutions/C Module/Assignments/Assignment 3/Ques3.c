//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
#include <stdio.h>
void main()
{
	int no=12345;
	int r1,sum=0;
	
	while(no>0){
		r1=no%10;
		sum=sum+r1;
		no=no/10;
	}
	printf("Sum of the digit is %d",sum);
}








