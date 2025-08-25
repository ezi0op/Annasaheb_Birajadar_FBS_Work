//1. Find minimum and maximum number in array.
#include<stdio.h>
#include<stdlib.h>
int Max(int*,int);
int Min(int*,int);
void main() {
	int size;
	printf("Enter the size of the  array : ");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	int a=Max(arr,size);
	printf("Max number in array will be %d\n",a);
	int b=Min(arr,size);
	printf("Min number in array will be %d",b);
	free(arr);
}
int Max(int* x,int s) {
	int* max=(int*)malloc(sizeof(int)*s);
	*max=x[0];
	for(int i=1; i<s; i++)
		if(x[i]>*max)
			*max=x[i];
	return *max;

}
int Min(int* y,int s) {
	int* min=(int*)malloc(sizeof(int)*s);
	*min=y[0];
	for(int i=1; i<s; i++)
		if(y[i]<*min)
			*min=y[i];
	return *min;
}