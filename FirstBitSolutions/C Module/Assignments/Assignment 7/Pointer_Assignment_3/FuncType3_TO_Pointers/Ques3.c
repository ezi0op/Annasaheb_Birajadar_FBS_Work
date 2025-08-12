//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
#include <stdio.h>
void Sum(int*,int*,int*);//Declaration
void main()
{
	int no=12345;
	int r1,sum=0;
	Sum(&no,&r1,&sum);//Call
}//main ends here
void Sum(int* a,int* b,int* c){

	
	while(*a>0){
		*b=*a%10;
		*c=*c+*b;
		*a=*a/10;
	}
	printf("Sum of the digit is %d",*c);
}//Sum ends here