//mystrncpy
#include<stdio.h>
char* mystrncpy(char*,char*,int );
void main() {
	char s1[6]="Hello";
	char s2[6];

	char *p=mystrncpy(s2,s1,1);
	printf("S2 will be %s",p);
}
char* mystrncpy(char* b,char* a,int n) {
	int i=0;
	while(i<n && a[i]!='\0') {

		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	return b;
}