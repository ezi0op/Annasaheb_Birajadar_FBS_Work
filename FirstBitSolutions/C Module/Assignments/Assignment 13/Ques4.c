//4. Find odd and even among the numbers.
#include<stdio.h>
#include<stdlib.h>
void Even(int*,int );
void Odd(int*,int );
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
	Even(arr,size);
	Odd(arr,size);
	free(arr);
}

void Even(int* a,int s) {
	printf("Even numbers are :");
	for(int i=0; i<s; i++)
		if(a[i]%2==0)
			printf("%d ",a[i]);

}

void Odd(int* a,int s) {
	printf("\nOdd numbers are :");
	for(int i=0; i<s; i++)
		if(a[i]%2!=0)
			printf("%d ",a[i]);

}