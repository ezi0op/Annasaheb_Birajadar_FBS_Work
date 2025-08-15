//3. Find sum of all numbers.
#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("Sum of all numbers in the array is %d",sum);
}