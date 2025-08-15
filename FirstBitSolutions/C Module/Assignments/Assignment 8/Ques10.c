//10. Sort the array.
#include<stdio.h>
void main() {
	int s1=5;
	int a[s1],temp;
	for(int i=0; i<s1; i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0; i<s1-1; i++) {
		for(int j=0; j<s1-i-1; j++) {
			if(a[j]<a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(int i=0; i<s1; i++) {
			printf("%d ",a[i]);
		}
	}
}
