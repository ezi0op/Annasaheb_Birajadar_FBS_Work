//7. Take two array and add sum in third array
//
//Example-
//arr[5]= {1,2, 3, 4,5}
//
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
#include<stdlib.h>
void StoreArray(int*,int );
void Sumof3rdArray(int*,int*,int );
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	int* brr=(int*)malloc(sizeof(int)*size);
	printf("Enter the elements of arr:");
	StoreArray(arr,size);
	printf("Enter the elements of brr:");
	StoreArray(brr,size);
	Sumof3rdArray(arr,brr,size);
	free(arr);
	free(brr);
}
void StoreArray(int* ptr,int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}
void Sumof3rdArray(int* a,int* b,int s) {
	printf("Sum of third array will be :");
	int* c=(int*)malloc(sizeof(int)*s);
	for(int i=0; i<s; i++) {
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
	free(c);
}
