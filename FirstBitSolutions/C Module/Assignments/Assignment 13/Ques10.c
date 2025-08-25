//10. Sort the array.
#include<stdio.h>
#include<stdlib.h>
void Sort(int*,int);
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);

	Sort(arr,size);
	free(arr);
}
void Sort(int* a,int s) {
	int* temp=(int*)malloc(sizeof(int)*s);
	for(int i=0; i<s-1; i++) {
		for(int j=0; j<s-1-i; j++) {
			if(a[j]<a[j+1]) {
				*temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = *temp;
			}
		}
	}
	printf("Sorted elements in the array :");
	for(int i=0; i<s; i++)
		printf("%d ",a[i]);
	
	free(temp);

}