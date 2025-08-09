//7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
void HrsAndMin();//Declaration
void main()
{
	HrsAndMin();//call
}//main ends here
void HrsAndMin(){
	int min=130;
	int hours;
	
	hours = min/60;
	min=min%60;
	
	printf("Remaining hours are %d and minutes are %d",hours,min);
}