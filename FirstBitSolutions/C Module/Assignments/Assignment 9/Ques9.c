//9. Reverse the given array.
#include<stdio.h>
void Reverse(int*,int*,int);
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size],rev[size];
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Reverse(arr,rev,size);
}
void Reverse(int* a,int* r,int s) {
	for(int i=0; i<s; i++) {
		r[i]=a[s-1-i];
	}
	printf("Reversed array will be :");
	for(int i=0; i<s; i++) {
		printf("%d ",r[i]);
	}
}