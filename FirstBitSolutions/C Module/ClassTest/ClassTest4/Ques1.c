//Que 1: Write a program to print factors of number in given range.
//
//Eg. Range 10 to 15
//10-1,2,5,10
//12-1, 2, 3, 4, 6, 12
//13-1,13
//14-1,2,7,14
//15-1,3,5,15
#include<stdio.h>
void main() {
	int S,D;
	printf("Enter start number and end number : \n ");
	scanf("%d%d",&S,&D);

	for(int num=S; num<=D; num++) {
		printf("%d -",num);
		for(int i=1; i<=D; i++) {
			if(num%i==0) {
				printf("%d",i);
			}
		}
		printf("\n");
	}


}

