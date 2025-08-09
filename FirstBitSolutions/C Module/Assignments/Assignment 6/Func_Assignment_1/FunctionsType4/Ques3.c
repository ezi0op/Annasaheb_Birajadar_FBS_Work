//3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
int LeapYear(int);//Declaration
void main()
{
	int year;
	year =  2020;
	int res=LeapYear(year);//Call
	if(res)
	{
		printf("It is leaf Year");
	}
	else
	{
		printf("It is not leaf Year");
	}
}//Main ends here
int LeapYear(int a){
	return a%4==0&&a%100!=0||a%400==0;
}//LeapYear ends here
