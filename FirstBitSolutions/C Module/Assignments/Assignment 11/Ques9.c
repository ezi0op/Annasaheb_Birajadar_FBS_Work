//mystrstr
#include<stdio.h>
char* mystrstr(char*,char* );
void main() {
	char str[]="HELLOAMITWORLD";
	char substr[]="AMIT";
	char *res=mystrstr(str,substr);
	if(res != NULL)
		printf("Found at :%s",res);
	else
		printf("Not Found ");
}
char* mystrstr(char* a,char* b) {
	int i,j,flag;
	for(i=0; a[i]!='\0'; i++) {
		for(j=0; b[j]!='\0'; j++) {
			flag=1;
			if(a[i+j]!=b[j])
				flag=0;
		}
		if(flag==1)
			return &a[i];
	}
	return NULL;

}