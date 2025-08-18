//strncmp()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"apple"};
	char b[]={"apricot"};
	printf("The camparison string will be %d",strncmp(a,b,3));
}