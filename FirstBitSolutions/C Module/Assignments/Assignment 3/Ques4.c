//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
#include<math.h>
void main()
{
	int no,isPrime =1,i;
	printf("Enter a number:");
	scanf("%d",&no);
	for(i=2; i<=no/2; i++) {
		if(no%i==0) {
			isPrime=0;
			break;
		}	
	}
	if(isPrime==1) {
		printf("This is  prime");
	} else {
		printf("This is not prime");
	}
		
}

