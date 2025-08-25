//6. Accept array and print only prime numbers of array.
#include<stdio.h>
#include<stdlib.h>
void Prime(int*,int);
void main() {
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	printf("Enter the elements in the array :");
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	Prime(arr,size);
	free(arr);
}
void Prime(int* a,int s) {
	int num;
	int* prime=(int*)malloc(sizeof(int)*s);
	int i;
	printf("Prime numbers in the array are :");
	for(i=0; i<s; i++) {
		num=a[i];
		*prime=1;
		for(int j=2; j<num; j++) {
			if(num%j==0)
				*prime=0;
		}
		if(*prime==1)
			printf("%d ",a[i]);
	}
	free(prime);

}