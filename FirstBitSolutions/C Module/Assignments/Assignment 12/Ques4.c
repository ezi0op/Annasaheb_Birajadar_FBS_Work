//4. WAP to Form a New String where the First Character and the Last Character have been Exchanged
#include<stdio.h>
#include<string.h>
void Exchange(char* );
void main() {
	char s[]="Hello";
	Exchange(s);
	printf("%s",s);
}
void Exchange(char* a) {
	int len=strlen(a);
	printf("%d",len);
	if(len>1) {
		char temp=a[0];
		a[0]=a[len-1];
		a[len-1]=temp;
	}
}
