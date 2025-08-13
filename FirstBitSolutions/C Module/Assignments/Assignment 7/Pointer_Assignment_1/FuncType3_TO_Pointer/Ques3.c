//3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
void LeapYear(int*);//Declaration
void main()
{
	int year;
	year =  2020;
	LeapYear(&year);//Call
}//Main ends here
void LeapYear(int* a){
	if(*a%4==0&&*a%100!=0||*a%400==0)
		printf("It is leaf Year");
	else
		printf("It is not leaf Year");
}//LeapYear ends here
