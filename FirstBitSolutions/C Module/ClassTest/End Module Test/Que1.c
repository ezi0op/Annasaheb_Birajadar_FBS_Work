#include<stdio.h>
void main() {
	int n=10;
	primenum(n);
}
void primenum(int a) {
	int sum=0;
	for(int i=2; i<a/2; i++) {
		if(a%i==0) {
			sum=sum+i;
		}
	}
	printf("%d",sum);

}