//7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
int getHours();
int getMin();
void main()
{
	int hours=getHours();
	int min=getMin();
	
	printf("Remaining hours are %d and minutes are %d",hours,min);
}
getHours(){
	int min=130;
	int hours;
	
	return  min/60;
}
getMin(){
	int min=130;
	int hours;
	return min%60;
	
}