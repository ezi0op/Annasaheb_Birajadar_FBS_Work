//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
#include<math.h>
void main()
{
	int a, prime=1;
	int i=2;
	printf("Enter a number: ");
	scanf("%d", &a);


		if(a <=1){
			prime = 0;
		}else{
			while(i<=sqrt(a)){
				if(a%i==0){
					prime=0;
				}
				i++;
			}
		}
		if(prime){
			printf("%d is prime",a);
		}else{
				printf("%d is not prime",a);
		}
		
}

