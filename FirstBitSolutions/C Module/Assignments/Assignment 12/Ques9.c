//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions
#include<stdio.h>
int largerstring(char*,char* );
void main() {
	char a[]="Firstbit";
	char b[]="Firstbit";
	int res=largerstring(a,b);
	if(res==1)
		printf("%s",a);
	else if(res==-1)
		printf("%s",b);
	else
		printf("Both strings are equal length");
}
int largerstring(char* x,char* y) {
	int i;
	int l1=0,l2=0;
	for(i=0; x[i]!='\0'; i++)
		l1++;
	for(i=0; y[i]!='\0'; i++)
		l2++;
	if(l1>l2)
		return 1;
	else if(l2>l1)
		return -1;
	else 
		return 0;
}