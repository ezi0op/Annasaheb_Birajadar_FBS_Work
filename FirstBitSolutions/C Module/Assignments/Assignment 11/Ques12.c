//mystrrchr
#include<stdio.h>
char* mystrrchr(char*,char );
void main() {
	char str[]="HELLOAMITWORLD";
	char ch='A';
	char *res=mystrrchr(str,ch);
	if(res!='\0')
	printf("found at:%s",res);
	else
		printf("not found");

}
char* mystrrchr(char* s,char c) {
	int i=0;
	while(s[i]!='\0') {
		i++;
	}
	int l=i-1;
	while(l>=0) {
		if(s[l]==c)
			return &s[l];
		l--;
	}

	return '\0';
}