//9. Reverse the given array.
#include<stdio.h>
void main(){
	int a[5],r[5];
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		r[i]=a[4-i];
	}
	for(int i=0;i<5;i++){
		printf("%d ",r[i]);
	}
}