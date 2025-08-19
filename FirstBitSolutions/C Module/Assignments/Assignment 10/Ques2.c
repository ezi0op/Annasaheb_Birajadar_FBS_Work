//Strcpy()
#include<string.h>
#include<stdio.h>
void main(){
	int size;
	printf("Enter a size of string :");
	scanf("%d",&size);
	char a[size],temp[20];
	printf("Enter the string name :");
	scanf("%s",a);
	strcpy(temp,a);
	printf("\nThe copied string will be %s",temp);
	
}