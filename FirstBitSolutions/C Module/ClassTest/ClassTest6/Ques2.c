//2.Write a program in C to find two maximum number in array?
#include<stdio.h>
void storeArray(int* ,int );
void display(int* ,int );
int Max(int* ,int );
void main(){
	int s[6];
	storeArray(s,5);
	int res=Max(s,5);
	printf("Max: %d\n", res);
	
}
void storeArray(int* a,int s) {
	for(int i=0; i<s; i++)
		scanf("%d",&a[i]);
}
void display(int* a,int s) {
	for(int i=0; i<s; i++)
		printf("%d ",a[i]);
}
int Max(int* a,int s){
	int max=a[0];
	for(int i=0;i<s;i++){
				if(a[i]>max)
			max=a[i];
	}
	return max;
			
}