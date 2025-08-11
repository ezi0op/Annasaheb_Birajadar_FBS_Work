//7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
void Hours(int ,int );
void main()
{
	int min=130;
	int hours;
	
	Hours(min,hours);
}
void Hours(int min,int hours){
		hours = min/60;
	min=min%60;
	
	printf("Remaining hours are %d and minutes are %d",hours,min);
}