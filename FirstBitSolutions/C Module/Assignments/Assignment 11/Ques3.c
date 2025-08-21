//mystrcmp()
#include<stdio.h>
int mystrcmp(char*,char* );
void main() {
	char a[]="";
	char b[]="";

	int res=mystrcmp(a,b);
	printf("%d",res);

}
int mystrcmp(char* s1,char* s2) {
	int i=0;
	while(s1[i]!='\0'&&s2[i]!='\0') {
		if(s1[i]!=s2[i])
			return s1[i]-s2[i];
		i++;
	}
	return s1[i]-s2[i];

}