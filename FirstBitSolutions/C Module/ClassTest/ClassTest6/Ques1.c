//1. Write a program in C for, to find common elements in two arrays.
#include<stdio.h>
void storeArray(int*,int );
void display(int*,int );
void Common(int*,int*,int);
void main() {
	int a[5],b[5];
	storeArray(a,5);
	storeArray(b,5);

	Common(a,b,5);

}
void storeArray(int* a,int s) {
	for(int i=0; i<s; i++)
		scanf("%d",&a[i]);
}
void display(int* a,int s) {
	for(int i=0; i<s; i++)
		printf("%d ",a[i]);
}
void Common(int* a,int* b,int s) {
	for(int i=0; i<s; i++) {
		for(int j=0; j<s; j++)
		if(a[i]==b[j])
			printf("%d ",a[i]);
	}
}
