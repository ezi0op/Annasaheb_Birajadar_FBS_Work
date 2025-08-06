//4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
void VowelConsonant();//Declaration
void main()
{
 VowelConsonant();//Call
}//main ends here
void VowelConsonant(){
		char ch = 'b';
	if(ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u' ||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U')
	{
		printf("The character is vowel");
	}
	else
	{
		printf("The character is consonant");
	}
}//VowelConsonant ends here