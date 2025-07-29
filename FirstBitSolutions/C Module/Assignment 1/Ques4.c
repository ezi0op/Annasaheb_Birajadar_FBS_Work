//4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
void main()
{
	char ch = 'b';
	if(ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u')
	{
		printf("The character is vowel");
	}
	else
	{
		printf("The character is consonant");
	}
}