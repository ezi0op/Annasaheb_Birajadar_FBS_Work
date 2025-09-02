//Write a user define function to reverse string.
#include<stdio.h>
#include<string.h>
void ReverseString(char*,char*,int );
void main() {
	char str[20]="Amit";
	char rev[20];
	int b=strlen(str);
	ReverseString(str,rev,b);
	printf("reverse string is :%s",rev);

}
void ReverseString(char* a,char* r,int b) {
	int i;
	for( i=0; i<b; i++) {
		r[i]=a[b-1-i];
	}
	r[i]='\0';
}