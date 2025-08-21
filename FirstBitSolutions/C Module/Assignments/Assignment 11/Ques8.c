//mystrrev
#include<stdio.h>
char* mystrrev(char* );
void main() {
	char str[]="AMIT";
	char *res=mystrrev(str);
	printf("%s",res);
}
char* mystrrev(char* a) {
	int i=0;
	while(a[i]!='\0') {
		i++;
	}
	int s=0;
	int e=i-1;
	char temp;
	while(s<e) {
		temp=a[s];
		a[s]=a[e];
		a[e]=temp;
		s++;
		e--;
	}
	return a;

}