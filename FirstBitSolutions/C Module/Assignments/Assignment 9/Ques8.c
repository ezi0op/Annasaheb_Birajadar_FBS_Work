//8. Merge two arrays
#include<stdio.h>
void StoreArray(int*,int );
void MergeTwoArrays(int*,int*,int*,int,int,int);
void main() {
	int s1,s2,s3;
	printf("Enter the size of the array :");
	scanf("%d",&s1);
	printf("Enter the size of the array :");
	scanf("%d",&s2);
	int arr[s1],brr[s2],crr[s3=s1+s2];
	printf("Enter the elements of arr:");
	StoreArray(arr,s1);
	printf("Enter the elements of brr:");
	StoreArray(brr,s2);
	MergeTwoArrays(arr,brr,crr,s1,s2,s3);
}
void StoreArray(int* ptr,int size) {
	for( int i=0; i<size; i++) {
		scanf("%d",&ptr[i]);
	}
}
void MergeTwoArrays(int* a,int* b,int* c,int s1,int s2,int s3) {
	int i;
	for( i=0; i<s1; i++) {
		c[i]=a[i];
	}
	for(int j=0; j<s2; j++) {
		c[i]=b[j];
		i++;
	}
	printf("Merged array will be :");
	for( i=0; i<s3; i++) {
		printf("%d ",c[i]);
	}
}