//4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
char VowelConsonant(ch);//Declaration
void main()
{
	char ch = 'b';
	char res=VowelConsonant(ch);//Call
			
	if(res)
	{
		printf("The character is vowel");
	}
	else
	{
		printf("The character is consonant");
	}
}//main ends here
char VowelConsonant(ch){
	return ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u' ||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U';
}//VowelConsonant ends here