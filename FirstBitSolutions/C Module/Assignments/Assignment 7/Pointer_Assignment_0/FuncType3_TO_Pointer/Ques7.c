//7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
void Hours(int* ,int* );
void main()
{
	int min=130;
	int hours;
	
	Hours(&min,&hours);
}
void Hours(int* a,int* b){
	*b = *a/60;
	*a=*a%60;
	
	printf("Remaining hours are %d and minutes are %d",*b,*a);
}