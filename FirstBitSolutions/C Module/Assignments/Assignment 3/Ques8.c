//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void main()
{
	int n=188;
	int i =n,fact=1,temp,sum;
	while(i>n){
		fact = fact * i;
		temp = fact;
		i--;
		
	}
	sum = fact + temp;
	if(sum == n)
		printf("It is strong");
	else
		printf("It is not strong");
	
}