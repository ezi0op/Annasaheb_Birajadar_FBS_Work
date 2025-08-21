//mystrnstr
#include<stdio.h>
char* mystrnstr(char*,char*,int );
void main() {
	char str[]="HELLOAMITWORLD";
	char substr[]="AMIT";
	char *res=mystrnstr(str,substr,10);
	if(res != '\0')
		printf("Found at :%s",res);
	else
		printf("Not Found ");
}
char* mystrnstr(char* a,char* b,int n) {
	int i,j,flag;
	for(i=0; a[i]!='\0'&&i<n; i++) {
		for(j=0; b[j]!='\0'; j++) {
			flag=1;
			if(a[i+j]!=b[j]||(i+j)>=n)
				flag=0;
		}
		if(flag==1)
			return &a[i];
	}
	return '\0';

}