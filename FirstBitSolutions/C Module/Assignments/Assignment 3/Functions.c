// 1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
void Numbers();//Declaration
void main()
{
	Numbers();//Call
}//main ends here
void Numbers(){
		int i=1;
	
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
}//Numbers ends here

//2 Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include <stdio.h>
void Table();//Declaration
void main()
{
	Table();//Call
}//main ends here
void Table(){
		int i = 1;
	
	while(i<=10)
	{
		printf("\n%d",i*5);
		i++;
	}
}//Table ends here

//3 Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
#include <stdio.h>
void Sum();//Declaration
void main()
{
	Sum();//Call
}//main ends here
void Sum(){
		int no=12345;
	int r1,sum=0;
	
	while(no>0){
		r1=no%10;
		sum=sum+r1;
		no=no/10;
	}
	printf("Sum of the digit is %d",sum);
}//Sum ends here

//4 Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
void Prime();//Declaration
void main()
{
	Prime();//Call		
}//main ends here
void Prime(){
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
	
}//Prime ends here

//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void Armstrong();//Declaration
void main()
{
	Armstrong();//Call		
}//main ends here
void Armstrong(){
	int n=153,no,rem,sum;
	int temp = sum = 0;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		sum = sum + rem*rem*rem;

	}
	if(temp == sum){
		printf("This is Armstrong number");
	}else{
		printf("This is not Armstrong number");
	}
}//Armstrong ends here

//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void Perfect();//Declaration
void main()
{
	Perfect();//Call
}//main ends here
void Perfect(){
	int n,sum,i;
	i = 1;
	n = 28;
	sum = 0;
	
	while(i<n){
		if(n%i==0){
			sum +=i;
		}	
		i++;
	}
	if(sum==n){
		printf("%d is Perfect number",n);
	}else{
		printf("%d is not Perfect number",n);	
	}	
}//Perfect ends here

//7 Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void Factorial();//Declaration
void main()
{
	Factorial();//Call
}//main ends here
void Factorial(){
	int n=5;
	int i =n,factorial=1;
	while(i>1){
		factorial = factorial* i;
		i--;
		
	}
	printf("%d is Factorial number %d",n,factorial);	
}//Factorial ends here

//8 Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void Strong();//Declaration
void main()
{
	Strong();//Call
}//main ends here
void Strong(){
	int n=188;
	int i =n,fact=1,temp,sum;
	while(i>n){
		fact = fact * i;
		temp = fact;
		i--;
		
	}
	sum = fact + temp;
	if(sum == n)
		printf("It is strong");
	else
		printf("It is not strong");
}//strong ends here
//9 Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void Palllindrome();//Declaration
void main()
{
	Palllindrome();//Call
}//main ends here
void Palllindrome(){
	int n=689,no,rem,rev=0;
	int temp = n;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		rev = rev*10+rem;

	}
	if(temp == rev){
		printf("This is Palindrome number");
	}else{
		printf("This is not Palindrome number");
	}
}//Pallindrome ends here

//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void Digit();//Declaration
void main()
{
	Digit();//Call
}//main ends here
void Digit(){
		int no = 12345;
	int ld,sum;

	ld = no % 10;
	
	while(no>=10){
		no = no /10;

	}
	sum = ld + no;
	printf("Sum of first and last digit of given number is %d",sum);
}//Digit ends here