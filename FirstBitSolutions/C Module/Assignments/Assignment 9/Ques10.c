//10. Sort the array.
#include<stdio.h>
void Sort(int*,int);
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Sort(arr,size);
}
void Sort(int* a,int s) {
	int temp;
	for(int i=0; i<s-1; i++) {
		for(int j=0; j<s-1-i; j++) {
			if(a[j]<a[j+1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Sorted elements in the array :");
	for(int i=0; i<s; i++) {
		printf("%d ",a[i]);
	}

}