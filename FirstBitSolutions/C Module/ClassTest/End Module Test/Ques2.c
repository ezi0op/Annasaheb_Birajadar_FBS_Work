#include<stdio.h>
#include<string.h>
void Scanstring(char* );
void  replacesymbol(char*);
void main() {
	char a[5];
	Scanstring(a);
	replacesymbol(a);
	printf("Replaced string is : %s",a);
}
void Scanstring(char* a) {
	printf("Enter string :");
	scanf("%s",a);
}
void replacesymbol(char* a) {
	int len = strlen(a);
	for(int i=0; i<len; i++) {
		if(a[i]=='a') {
			a[i]='$';
		}
	}
}
