//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include <stdio.h>
void Table();//Declaration
void main()
{
	Table();//Call
}//main ends here
void Table(){
		int i = 1;
	
	while(i<=10)
	{
		printf("\n%d",i*5);
		i++;
	}
}//Table ends here
