//Strlen()
#include<string.h>
#include<stdio.h>
void main() {
	int size;
	printf("Enter size of the string :");
	scanf("%d",&size);
	char a[size];
	printf("Enter a name of string :");
	scanf("%s",a);
	int x=strlen(a);
	printf("\nThe length of string is :%d",x);

}
