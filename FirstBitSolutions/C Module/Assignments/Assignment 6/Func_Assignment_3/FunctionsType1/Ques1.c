// 1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
void Numbers();//Declaration
void main()
{
	Numbers();//Call
}//main ends here
void Numbers(){
		int i=1;
	
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
}//Numbers ends here