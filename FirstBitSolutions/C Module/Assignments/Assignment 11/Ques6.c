//mystrupper()
#include<stdio.h>
char* mystrupper(char* );
void main() {
	char str[]="Amit";
	char *res=mystrupper(str);
	printf("%s",res);
}
char* mystrupper(char* a) {
	int i=0;
	while(a[i]!='\0') {
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
		i++;

	}
	return a;

}