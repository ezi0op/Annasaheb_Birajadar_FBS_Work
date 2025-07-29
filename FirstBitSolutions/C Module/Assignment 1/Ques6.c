//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
void main()
{
 	char ch = 'a';
 	
 	if(ch >= 'A'&& ch <= 'Z')
 	{
 		printf("Its is uppercase character");	
	}
	else
	{
		printf("Its is lowercase character");
	}
}