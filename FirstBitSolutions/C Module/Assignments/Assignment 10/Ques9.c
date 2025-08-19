//strrchr()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"hello"};
	char *ptr =strrchr(a,'l');
	printf("Found at :%s",ptr);
}
