//4. Find odd and even among the numbers.
#include<stdio.h>
void Even(int*,int );
void Odd(int*,int );
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Even(arr,size);
	Odd(arr,size);
}
void Even(int* a,int s) {
	printf("Even numbers are :\n");
	for(int i=0; i<s; i++) {

		if(a[i]%2==0)
			printf("%d ",a[i]);
	}
}

void Odd(int* a,int s) {
	printf("\nOdd numbers are :\n");
	for(int i=0; i<s; i++) {

		if(a[i]%2!=0)
			printf("%d ",a[i]);
	}
}