//2. Print prime numbers in the given range 1 to n.
#include<stdio.h>
void main(){
	for(int k=1;k<=5000;k++){
	int no=k;
	int prime =1,i;
	int temp=no;

	for(i=2; i<=no/2; i++) {
		if(no%i==0) {
			prime=0;
			break;
		}	
	}
	if(prime==1 && no !=1) {
		printf("%d is  prime\n",temp);
	}
	}

}