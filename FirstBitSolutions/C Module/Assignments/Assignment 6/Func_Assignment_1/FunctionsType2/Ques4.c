//4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
char VowelConsonant();//Declaration
void main()
{
	int res=VowelConsonant();//Call
	if(res==1)
		printf("This is a Vowel");
	else
		printf("This is a Consonant");
}//main ends here
char VowelConsonant(){
	char ch = 'b';
	if(ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u' ||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U')
		return 1;
	else
		return 0;
}//VowelConsonant ends here