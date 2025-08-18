//strstr()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"1234Hello"};
	char b[]={"0123456789"};
	printf("Length of digits: %zu",strspn(a,b));
}
