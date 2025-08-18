//strcspn()
#include<string.h>
#include<stdio.h>
void main(){
	char a[]={"Hello123"};
	char b[]={"0123456789"};
	printf("Length before digits: %zu",strcspn(a,b));
}
