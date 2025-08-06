//Que 3. Print last 2 digit of number.
//Eg. i/p: 223410
//o/p: 10
#include <stdio.h>
void main()
{
	int no,ld;
	no=223410;
	ld = no%100;
	
	printf("Last 2 digit of number is %d", ld);
}