//1.Write a program to accept array and exchange the data of xth position and yth position
#include<stdio.h>
void swap(int*,int,int,int );
void main() {
	int arr[7]= {11,23,30,4,21,45,50};
	int a=3,b=5;
	swap(arr,7,a,b);
}
void swap(int* a,int s,int x,int y) {
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;

	for(int i=0; i<s; i++) {
		printf("%d ",a[i]);
	}
}
