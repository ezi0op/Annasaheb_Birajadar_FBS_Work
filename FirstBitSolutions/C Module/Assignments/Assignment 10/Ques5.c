//strncat()
#include<string.h>
#include<stdio.h>
void main() {
	int size;
	printf("Enter a size of string :");
	scanf("%d",&size);
	char a[size],b[size*2];
	printf("Enter string a :");
	scanf("%s",a);
	printf("Enter string b :");
	scanf("%s",b);
	strncat(b,a,4);
	printf("\nThe concatenated string is %s",b);
}