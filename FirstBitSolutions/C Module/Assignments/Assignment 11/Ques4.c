//mystrcat
#include<stdio.h>
char* mystrcat(char* ,char* );
void main(){
	char src[6]="World";
	char dest[12]="Hello";
	
	char* p=mystrcat(dest,src);
	printf("%s",dest);
	printf("%s",p);
	
}
char* mystrcat(char* d,char* s){
	int i=0,j=0;
	while(d[i]!='\0'){
		i++;
	}
	while(s[j]!='\0'){
		d[i]=s[j];
		i++,j++;
	}
	d[i]='\0';
	return d;
}