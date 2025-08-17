//7. Take two array and add sum in third array
//
//Example-
//arr[5]= {1,2, 3, 4,5}
//
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
void StoreArray(int*,int );
void Sumof3rdArray(int*,int*,int*,int );
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size],brr[size],crr[size];
	printf("Enter the elements of arr:");
	StoreArray(arr,size);
	printf("Enter the elements of brr:");
	StoreArray(brr,size);
	Sumof3rdArray(arr,brr,crr,size);
}
void StoreArray(int* ptr,int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}
void Sumof3rdArray(int* a,int* b,int* c,int s) {
	printf("Sum of third array will be :");
	for(int i=0; i<s; i++) {
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
}
