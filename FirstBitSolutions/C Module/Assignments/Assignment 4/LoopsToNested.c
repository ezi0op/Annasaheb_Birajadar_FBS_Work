//1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10
//#include<stdio.h>
//void main()
//{
//	int i;
//	for(i=1;i<=10;i++){
//		printf("%d\n",i);
//	}
//}
//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
//#include<stdio.h>
//void main()
//{
//	int i;
//	for(i=1;i<=10;i++){
//		printf("%d\n",i*5);
//	}
//}
//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
//#include<stdio.h>
//void main()
//{
//	int no=12345;
//	int r1,sum;
//	
//	for(sum=0;no>0;){
//		r1=no%10;
//		sum=sum+r1;
//		no=no/10;
//	}
//	printf("Sum of the digit is %d",sum);
//}
//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
//#include<stdio.h>
//void main()
//{n
//	int no,prime =1,i;
//	printf("Enter a number:");
//	scanf("%d",&no);
//	for(i=2; i<=no/2; i++) {
//		if(no%i==0) {
//			prime=0;
//			break;
//		}	
//	}
//	if(prime==1) {
//		printf("This is  prime");
//	} else {
//		printf("This is not prime");
//	}
//}
//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
//#include<stdio.h>
//void main()
//{
//	int n=153,no,rem,sum;
//	int temp = 0;
//	
//	for(sum=0;no>0;){
//		rem = no%10;
//		no = no / 10;
//		sum = sum + rem*rem*rem;
//
//	}
//	if(temp == sum){
//		printf("This is Armstrong number");
//	}else{
//		printf("This is not Armstrong number");
//	}
//}
//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
//#include<stdio.h>
//void main()
//{
//	int n,sum,i;
//	n = 28;
//	sum = 0;
//	
//	for(i=1;i<n;i++){
//		if(n%i==0){
//			sum +=i;
//		}	
//	}
//	if(sum==n){
//		printf("%d is Perfect number",n);
//	}else{
//		printf("%d is not Perfect number",n);	
//	}
//}
//7 Find factorial of given number.
//Input: n = 5
//Output: 120
//#include<stdio.h>
//void main()
//{
//	int n=5;
//	int i,fact=1;
//	for(i=n;i>1;i--){
//		fact = fact* i;	
//	}
//	printf("%d is Factorial number %d",n,fact);
//}
//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
//#include<stdio.h>
//void main()
//{
//	int n=188;
//	int i =n,fact=1,temp,sum;
//	for(i=n;i>n;i--){
//		fact = fact * i;
//		temp = fact;
//	}
//	sum = fact + temp;
//	if(sum == n)
//		printf("It is strong");
//	else
//		printf("It is not strong");
//}
//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
//#include<stdio.h>
//void main()
//{
//	int n=689,no,rem,rev=0;
//	int temp = n;
//	
//	for(1;no>0;no = no / 10){
//		rem = no%10;
//		rev = rev*10+rem;
//
//	}
//	if(temp == rev){
//		printf("This is Palindrome number");
//	}else{
//		printf("This is not Palindrome number");
//	}
//		
//}
//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main()
{
	int no = 12345;
	int ld,sum;

	ld = no % 10;
	
	for(;no>=10;){
		no = no /10;

	}
	sum = ld + no;
	printf("Sum of first and last digit of given number is %d",sum);
}