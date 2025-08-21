//mystrcasecmp
#include<stdio.h>
int mystrcasecmp(char*,char* );
void main() {
	char s1[]="AppIE";
	char s2[]="AppIcot";

	int res=mystrcasecmp(s1,s2);
	printf("%d",res);
}
int mystrcasecmp(char* a,char* b) {
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0') {
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