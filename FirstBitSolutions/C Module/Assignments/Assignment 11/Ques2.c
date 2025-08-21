//mystrlen()
#include<stdio.h>
int mystrlen(char* );
void main() {
	char s1[]="Hello";
	int len=mystrlen(s1);
	printf("length of the string will be %d",len);
}
int mystrlen(char* a) {
	int i=0;
	while(a[i]!=0)
		i++;
	return i;
}