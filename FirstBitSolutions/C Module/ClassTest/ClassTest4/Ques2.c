//Que 2: Write a program to find power of any number.
//Eg. 2^4=16.
#include<stdio.h>
int power(int,int);
void main(){
	int a=2,b=4,pow;
	
	int res=power(a,b);
	printf("%d",res);
}
int power(int x,int y){
	int result =1;
	for(int i=1;i<=y;i++){
		result = result*x;
	}
	return result;
	
}