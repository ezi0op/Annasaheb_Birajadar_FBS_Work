//5. Print alternate elements in array.
#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i=i+2){
		printf("%d ",arr[i]);
	}
}