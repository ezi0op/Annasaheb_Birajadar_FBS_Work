//memcpy
#include <string.h>
#include <stdio.h>
void main() {
	char a[]="Hello";
	char temp[10];
	memcpy(temp,a,6);
	printf("%s",temp);
}