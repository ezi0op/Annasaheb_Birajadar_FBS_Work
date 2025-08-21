//mystrncasecmp
#include<stdio.h>
int mystrncasecmp(char*,char*,int );
void main() {
	char s1[]="Apple";
	char s2[]="Apricot";

	int res=mystrncasecmp(s1,s2,4);
	printf("%d",res);
}
int mystrncasecmp(char* a,char* b,int n) {
	int i=0;
	while(i<n && a[i]!='\0' && b[i]!='\0') {
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		if(b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+32;
		if(a[i]!=b[i])
			return a[i]-b[i];
		i++;
	}
	return a[i]-b[i];

}