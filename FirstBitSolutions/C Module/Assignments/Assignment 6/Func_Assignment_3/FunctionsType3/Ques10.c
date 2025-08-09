//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void Digit(int);//Declaration
void main()
{
	int no = 12345;
	Digit(no);//Call
}//main ends here
void Digit(int a){
	
	int ld,sum;

	ld = a % 10;
	
	while(a>=10){
		a = a /10;

	}
	sum = ld + a;
	printf("Sum of first and last digit of given number is %d",sum);
}//Digit ends here