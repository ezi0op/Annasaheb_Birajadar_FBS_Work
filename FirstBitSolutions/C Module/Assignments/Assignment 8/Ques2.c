//2. Search the given number in array.
#include<stdio.h>
void main() {
	int arr[5],num,find=0;
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter the array number :");
	scanf("%d",&num);

	for(int i=0; i<5; i++) {
		if(arr[i]==num) {
			printf("Entered array number is found. ");
			find=1;
		}
	}
	if(find==0) {
		printf("Entered array number is not found.");
	}
}