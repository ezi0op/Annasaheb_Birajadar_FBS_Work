//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void main()
{
	int n=153,no,rem,sum;
	int temp = sum = 0;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		sum = sum + rem*rem*rem;

	}
	if(temp == sum){
		printf("This is Armstrong number");
	}else{
		printf("This is not Armstrong number");
	}
		
}

