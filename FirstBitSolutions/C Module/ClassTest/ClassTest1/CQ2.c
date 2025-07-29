//Que 2. WAP to check if the year is leap or not.
#include <stdio.h>
void main()
{
	int year;
	year =  2025;
	
	if(year%4==0&&year%100!=0)
	{
		printf("It is leaf Year");
	}
	else
	{
		printf("It is not leaf Year");
	}
}
