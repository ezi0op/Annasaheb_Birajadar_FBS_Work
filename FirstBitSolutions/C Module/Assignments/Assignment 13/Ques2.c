//2. Search the given number in array.
#include<stdio.h>
#include<stdlib.h>
int SearchArray(int*,int,int );
void main() {
	int size,num;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int* arr=(int*)malloc(sizeof(int)*size);
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter the search number :");
	scanf("%d",&num);
	int res=SearchArray(arr,size,num);
	if(res==0)
		printf("Array is found");
	else
		printf("Array is not found");
	free(arr);

}
int SearchArray(int* b,int s,int n) {
	for(int i=0; i<s; i++) {
		if(b[i]==n)
			return 0;
	}
	return 1;
}