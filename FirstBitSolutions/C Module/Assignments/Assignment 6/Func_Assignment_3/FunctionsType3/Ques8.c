//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void Strong(int);//Declaration
void main()
{
	int n=188;
	Strong(n);//Call
}//main ends here
void Strong(int a){

	int i =a,fact=1,temp,sum;
	while(i>a){
		fact = fact * i;
		temp = fact;
		i--;
		
	}
	sum = fact + temp;
	if(sum == a)
		printf("It is strong");
	else
		printf("It is not strong");
}//strong ends here