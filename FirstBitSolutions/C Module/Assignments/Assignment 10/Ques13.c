//strpbrk()
#include<string.h>
#include<stdio.h>
void main() {
	char a[] = "Hello123";
	char b[] = "0123456789";
	char *ptr = strpbrk(a, b);
	printf("First digit: %s", ptr);
}