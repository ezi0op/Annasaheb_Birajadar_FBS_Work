//3. Find sum of all numbers.
#include<stdio.h>
int SumArray(int*,int,int);
void main(){
	int size,sum=0;
	printf("Enter the array size :");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int res=SumArray(arr,size,sum);
	printf("Sum of all numbers in array is %d:",res);
}
int SumArray(int* a,int b,int c){
	for(int i=0;i<b;i++){
		c=c+a[i];
	}
	return c;
}