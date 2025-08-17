//5. Print alternate elements in array.
#include<stdio.h>
void Alternate(int*,int);;
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Alternate(arr,size);
	
}
void Alternate(int* a,int s){
	printf("Alternate elements are :\n");
	for(int i=0;i<s;i=i+2){
		printf("%d ",a[i]);
	}
}