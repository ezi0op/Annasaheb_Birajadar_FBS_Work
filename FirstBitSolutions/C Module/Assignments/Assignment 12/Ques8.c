//8. WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
int Words(char* );
void main() {
	char s[]="lets go to firstbit solutions";

	int res=Words(s);
	printf("%d",res);
}
int Words(char* a) {
	int count=0;
	for(int i=0; a[i]!='\0'; i++) {
		if(a[i]==' ') {
			count++;
		}
	}
	return count;
}