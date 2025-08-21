//mystrcpy
#include<stdio.h>
char* mystrcpy(char*,char* );
void main() {
	char s1[6]="Hello";
	char s2[6];

	char *p=mystrcpy(s2,s1);
	printf("S2 will be %s",p);
}
char* mystrcpy(char* b,char* a) {
	int i=0;
	while(a[i]!='\0') {

		b[i]=a[i];
		i++;
	}
	b[i]=a[i];
	return b;
}