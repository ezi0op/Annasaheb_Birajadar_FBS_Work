//mystrchr
#include<stdio.h>
char* mystrchr(char*,char );
void main() {
	char str[]="HELLOAMITWORLD";
	char ch='A';
	char *res=mystrchr(str,ch);
	if(res != NULL)
		printf("Found at :%s",res);
	else
		printf("Not Found ");
}
char* mystrchr(char* s,char c) {
	int i=0;
	while(s[i]!='\0') {
		if(s[i]==c)
			return &s[i];
		i++;
	}

	return NULL;

}