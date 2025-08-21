//mystrncat
#include<stdio.h>
char* mystrncat(char* ,char*,int );
void main(){
	char src[6]="World";
	char dest[12]="Hello";
	
	char* p=mystrncat(dest,src,1);
	printf("%s",p);
	
}
char* mystrncat(char* d,char* s,int n){
	int i=0,j=0;
	while(d[i]!='\0'){
		i++;
	}
	while(s[j]!='\0'&&j<n){
		d[i]=s[j];
		i++,j++;
	}
	d[i]='\0';
	return d;
}