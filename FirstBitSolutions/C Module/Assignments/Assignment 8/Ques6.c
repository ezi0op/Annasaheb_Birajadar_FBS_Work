//6. Accept array and print only prime numbers of array.
#include<stdio.h>
void main() {
	int arr[5],num;
	for(int i=0; i<5; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<5; i++) {
		num=arr[i];
		int prime=1;
		if(num<=1) {
			prime=0;
		}
		for(int j=2; j<num; j++) {
			if(num%j==0) {
				prime=0;
			}
		}
		if(prime==1) {
			printf("%d\n",num);
		}
	}

}