//7. WAP to Remove the Characters of Odd Index Values in a String
#include<string.h>
#include<stdio.h>
void OddIndex(char*);
void main() {
	char a[]="amit";
	OddIndex(a);
	printf("%s",a);
}
void OddIndex(char* s) {
	int j=0;
	for(int i=0; s[i]!='\0'; i++) {
		if(i%2==0) {
			s[j]=s[i];
			j++;
		}
	}
	s[j]='\0';
}