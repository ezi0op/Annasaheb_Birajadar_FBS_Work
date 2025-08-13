//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include <stdio.h>
void Table(int*);//Declaration
void main()
{
	int i = 1;
	Table(&i);//Call
}//main ends here
void Table(int* b){
		
	
	while(*b<=10)
	{
		printf("\n%d",*b*5);
		(*b)++;
	}
}//Table ends here
