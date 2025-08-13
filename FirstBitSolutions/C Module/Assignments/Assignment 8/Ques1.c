//1. Find minimum and maximum number in array.
#include<stdio.h>
void main() {
	int arr[5];
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<5; i++) {
		printf("%d \n",arr[i]);
	}
	int max=arr[0];
	for(int i=0; i<5; i++) {
		if(arr[i]>max) {
			max=arr[i];
		}
	}
	int min=arr[0];
	for(int i=0; i<5; i++) {
		if(arr[i]<min) {
			min=arr[i];
		} 
	}
	printf("minimum and maximum in array will be %d and %d \n",min,max);
}