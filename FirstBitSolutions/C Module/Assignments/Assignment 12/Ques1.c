//1. Write a program to scan string from user then scan a single character and search it
//in a accepted string.
#include<stdio.h>
int Search(char*,char);
void main() {
	char a[]="Hello";
	char ch;
	printf("Enter the String:");
	scanf("%c",&ch);

	int res=Search(a,ch);
	if(res==1)
		printf("String is found:");
	else
		printf("String is not found:");
}
int Search(char* s,char c) {
	for(int i=0; s[i]!='\0'; i++) {
		if(s[i]==c)
			return 1;
	}
	return 0;
}