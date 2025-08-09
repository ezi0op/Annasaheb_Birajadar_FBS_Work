//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
void Prime(int,int,int);//Declaration
void main()
{
	int no,isPrime =1,i;
	printf("Enter a number:");
	scanf("%d",&no);
	Prime(no,isPrime,i);//Call		
}//main ends here
void Prime(int b,int p,int a){

	for(a=2; a<=b/2; a++) {
		if(b%a==0) {
			p=0;
			break;
		}	
	}
	if(p==1) {
		printf("This is  prime");
	} else {
		printf("This is not prime");
	}
	
}//Prime ends here