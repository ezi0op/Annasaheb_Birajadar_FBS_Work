//3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
void main()
{
	int year;
	year =  2020;
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("It is leaf Year");
	}
	else
	{
		printf("It is not leaf Year");
	}
}