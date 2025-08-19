//strstr()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"Hello World"};
	char *ptr =strstr(a,"World");
	printf("Substring found at :%s",ptr);
}
