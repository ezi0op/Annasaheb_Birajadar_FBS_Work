//10. Sort the array.
#include<stdio.h>
void main(){
	int a[5],temp;
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}