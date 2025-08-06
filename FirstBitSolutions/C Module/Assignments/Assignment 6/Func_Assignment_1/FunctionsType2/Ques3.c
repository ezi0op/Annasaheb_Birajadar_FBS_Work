//3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
int LeapYear();//Declaration
void main()
{
    int res=LeapYear();//Call
    if(res==1)
  		printf("This is LeapYear");
	else
		printf("This is not LeapYear");
  
}//Main ends here
int LeapYear(){
	int year;
	year =  2020;
	
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else
		return 0;
}//LeapYear ends here