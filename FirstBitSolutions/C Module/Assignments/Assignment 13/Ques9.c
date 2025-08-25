//9. Reverse the given array.
#include<stdio.h>
#include<stdlib.h>
void Reverse(int*,int);
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Reverse(arr,size);
	free(arr);
}
void Reverse(int* a,int s) {
	int* r=(int*)malloc(sizeof(int)*s);
	for(int i=0; i<s; i++)
		r[i]=a[s-1-i];

	printf("Reversed array will be :");
	for(int i=0; i<s; i++)
		printf("%d ",r[i]);
	free(r);
}