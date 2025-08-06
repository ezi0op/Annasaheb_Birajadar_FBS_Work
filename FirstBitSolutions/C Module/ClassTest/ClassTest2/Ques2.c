//Que 2. WAP to check if number is positive, negative or neutral (0)
#include<stdio.h>
void Number();
void main(){
	Number();		
}
void Number(){
	int no=0;
	if(no>0){
		printf("%d is Positive",no);
	}else if(no<0){
		printf("%d is negative",no);
	}else{
		printf("%d is neutral",no);
	}
}