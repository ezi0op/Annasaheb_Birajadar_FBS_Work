//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
#include<string.h>
void RemoveChar(char*,int );
void main() {
	char a[]="Amit";
	RemoveChar(a,2);
	printf("String will be %s",a);
}
void RemoveChar(char* a,int n) {
	int len=strlen(a);
	for(int i=n; i<len; i++) {
		a[i]=a[i+1];
	}
}