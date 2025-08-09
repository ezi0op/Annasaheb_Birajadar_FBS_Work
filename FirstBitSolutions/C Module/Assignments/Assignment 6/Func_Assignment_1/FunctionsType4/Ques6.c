//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
char Chartr(char);//Declaration
void main()
{	
	char ch = 'a';
	char res=Chartr(ch);//Call
	if(res)
 		printf("Its is uppercase character");	
	else
		printf("Its is lowercase character");
}//main ends here
char Chartr(char a){
	return a >= 'A'&& a <= 'Z';
 	

}//Character ends here