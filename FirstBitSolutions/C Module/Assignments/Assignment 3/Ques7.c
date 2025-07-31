//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main()
{
	int n=5;
	int i =n,factorial=1;
	while(i>1){
		factorial = factorial* i;
		i--;
		
	}
	printf("%d is Factorial number %d",n,factorial);
}