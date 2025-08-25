//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
char* Replace(char* );
void main(){
	char a[]="I am good";
	Replace(a);
	printf("%s",a);
}
char* Replace(char* s){
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==' ')
			s[i]='$';
	}
	return s;
}