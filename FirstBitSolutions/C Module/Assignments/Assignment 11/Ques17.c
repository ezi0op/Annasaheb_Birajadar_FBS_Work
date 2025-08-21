#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* mystrdup(char* );
void main() {
	char s1[]="Amit";
	char* res=mystrdup(s1);
	printf("%s",res);
}
char* mystrdup(char* a) {
	int len=strlen(a)+1;
	char* temp=(char*)malloc(sizeof(char)*len);
	for(int i=0;i<len;i++) {
			temp[i]= a[i];
	}
	return temp;
}