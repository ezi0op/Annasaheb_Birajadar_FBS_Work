//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
void Chartr(char*);//Declaration
void main()
{	
	char ch = 'a';
	Chartr(&ch);//Call
}//main ends here
void Chartr(char* a){
 	if(*a> 'A'&& *a < 'Z')
 		printf("Its is uppercase character");	
	else
		printf("Its is lowercase character");
}//Character ends here