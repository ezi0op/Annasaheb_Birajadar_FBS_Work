//2. WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void Replace(char* );
void main() {
	char a[]="amit";
	Replace(a);
	printf("Replaced Occurrence string is %s",a);
}
void Replace(char* s) {
	for(int i=0; s[i]!='\0'; i++) {
		if(s[i]=='a')
			s[i]= '$';
	}
}
