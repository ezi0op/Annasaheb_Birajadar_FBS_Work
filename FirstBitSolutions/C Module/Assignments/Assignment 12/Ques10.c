//10. Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int PalindromeString(char*);//Declaration
void main() {
	char s[]="madam";
	int res=PalindromeString(s);//Call
	if(res==1)
		printf("String is pallindrome");
	else
		printf("String is not pallindrome");
}//main ends here
int PalindromeString(char* a) {
	int len=strlen(a);
	int flag=1;
	for(int i=0; i<len/2; i++)  {
		if(a[i]!=a[len-1-i])
			flag=0;
			
	}
	return flag;

}//Pallindrome ends here