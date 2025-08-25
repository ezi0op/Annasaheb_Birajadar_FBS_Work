//3. Find sum of all numbers.
#include<stdio.h>
#include<stdlib.h>
int SumArray(int*,int);
void main() {
	int size;
	printf("Enter the array size :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
	int res=SumArray(arr,size);
	printf("Sum of all numbers in array is %d",res);
	free(arr);
}
int SumArray(int* a,int b) {
	int* c=(int*)malloc(sizeof(int)*b);
	*c=0;
	for(int i=0; i<b; i++)
		*c=*c+a[i];
	int res=*c;
	free(c);
	return res;
	
}