//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void Factorial(int,int,int);//Declaration
void main()
{
	int n=5;
	int i =n,factorial=1;
	Factorial(n,i,factorial);//Call
}//main ends here
void Factorial(int a,int b,int c){

	while(b>1){
		c = c* b;
		b--;
		
	}
	printf("%d is Factorial number %d",a,c);	
}//Factorial ends here