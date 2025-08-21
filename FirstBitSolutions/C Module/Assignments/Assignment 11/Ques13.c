//mystrncmp()
#include<stdio.h>
int mystrncmp(char*,char*,int );
void main() {
	char a[]="apcle";
	char b[]="apcricot";

	int res=mystrncmp(a,b,2);
	printf("%d",res);
}
int mystrncmp(char* s1,char* s2,int n) {
	int i=0;
	while(i<n && s1[i]!='\0'&&s2[i]!='\0') {
		if(s1[i]!=s2[i])
			return s1[i]-s2[i];
		i++;
	}
	return s1[i]-s2[i];

}