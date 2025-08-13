//8. Merge two arrays
#include<stdio.h>
void main(){
	int a1[5],a2[5],m[10];
	
	for(int i=0;i<5;i++){
		scanf("%d",&a1[i]);
	}
	for(int i=0;i<5;i++){
		scanf("%d",&a2[i]);
	}
	for(int i=0;i<5;i++){
		m[i]=a1[i];
	}
	for(int i=0;i<5;i++){
		m[i+5]=a2[i];
	}
	for(int i=0;i<10;i++){
		printf("%d ",m[i]);
	}
	
}