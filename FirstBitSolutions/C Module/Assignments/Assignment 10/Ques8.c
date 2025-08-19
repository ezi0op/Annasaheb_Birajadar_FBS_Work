//Strchr()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"AMIT"};
	char *ptr =strchr(a,'I');
	printf("Found at :%s",ptr);
}