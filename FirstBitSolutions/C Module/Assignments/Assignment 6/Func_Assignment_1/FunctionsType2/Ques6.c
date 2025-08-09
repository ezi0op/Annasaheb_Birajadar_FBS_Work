//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
char Character();//Declaration
void main()
{
	char res=Character();//Call
	if(res==1)
		printf("Its is Uppercase character");
	else
		printf("Its is lowercase character");
}//main ends here
char Character(){
	char ch = 'a';
 	if(ch >= 'A'&& ch <= 'Z')
		return 1;
	else
		return 0;
}//Character ends here
