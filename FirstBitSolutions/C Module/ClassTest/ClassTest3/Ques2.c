//2. WAP to add alternate numbers from given range.
//eg. i/p: start= 1, end= 5
//o/p: sum= 9
#include<stdio.h>
void main() {
	int S,D,SUM=0;
	printf("Enter Start number: ");
	scanf("%d",&S);
	printf("Enter Start number: ");
	scanf("%d",&D);

	for(; S<=D; S++) {
		if(S%2 != 0) {
			SUM = SUM+S;
		}
	}
	printf("%d\n",SUM);
}