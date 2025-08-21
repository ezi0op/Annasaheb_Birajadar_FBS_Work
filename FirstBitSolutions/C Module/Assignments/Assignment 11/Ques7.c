//mystrlower()
#include<stdio.h>
char* mystrlower(char* );
void main() {
	char str[]="AMIT";
	char *res=mystrlower(str);
	printf("%s",res);
}
char* mystrlower(char* a) {
	int i=0;
	while(a[i]!='\0') {
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		i++;

	}
	return a;

}