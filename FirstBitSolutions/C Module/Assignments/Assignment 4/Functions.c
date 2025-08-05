////1. Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void Armstrong();//Declaration
void main() {
	Armstrong();//Call
}//main ends here
void Armstrong(){
		for(int k=1; k<=10000; k++) {
		int num=k,r,sum=0,temp=num,p,i;
		int count=0;
		while(temp!=0) {
			count++;
			temp=temp/10;
		}
		temp=num;
		while(temp!=0) {
			r=temp%10;
			p=1;
			for(i=1; i<=count; i++) {
				p=p*r;
			}
			sum=sum+p;
			temp=temp/10;
		}
		if(num==sum) {
			printf("%d is Armstrong\n",num);
		}
	}
}//Armstrong ends here

//2. Print prime numbers in the given range 1 to n.
#include<stdio.h>
void Prime();//Declaration
void main() {
	Prime();//Call
}//main ends here
void Prime(){
		for(int k=1; k<=5000; k++) {
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
}//Prime ends here

//3. Print perfect numbers in the given range 1 to n.
#include<stdio.h>
void Perfect;//Declaration
void main() {
	Perfect();//Call
}//main ends here
void Perfect(){
	for(int j=1; j<=5000; j++) {
		int n=j;
		int sum,i;
		sum = 0;

		for(i=1; i<n; i++) {
			if(n%i==0) {
				sum +=i;
			}
		}
		if(sum==n && n !=1) {
			printf("%d is Perfect number\n",n);
		}
}//Perfect ends here



//4. Print strong numbers in the given range 1 to n.
#include<stdio.h>
void Strong();//Declaration
void main() {
	Strong();//Call
}//main ends here
void Strong(){
	for(int k=1; k<=6000000; k++) {
		int n=k,i;
		int temp=n,sum=0;
		while(temp > 0) {
			int digit = temp % 10;
			int fact = 1;

			for(i=1; i<=digit; i++) {
				fact = fact * i;

			}
			sum += fact;
			temp = temp / 10;
		}
		if(sum == n)
			printf("%d is strong\n",n);
	}	
}//Strong ends here

//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.


#include <stdio.h>
void MenuDriven();//Declaration
void EvenOdd();//Declaration
void Prime();//Declaration
void Pallindrome();//Declaration
void PosNeg();//Declaration
void Reverse();//Declaration
void SumOfDigits();//Declaration
void main()
{
    MenuDriven();//Call
}//main ends here
void MenuDriven(){
	int no, choice, rem, rev = 0, sum = 0, temp, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &no);  

    printf("Enter 1 ---> Even or Odd\n");
    printf("Enter 2 ---> Prime\n");
    printf("Enter 3 ---> Palindrome\n");
    printf("Enter 4 ---> Positive, Negative or Zero\n");
    printf("Enter 5 ---> Reverse\n");
    printf("Enter 6 ---> Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);  

    if(choice == 1) {
        EvenOdd();

    } else if(choice == 2) {
		Prime();

    } else if(choice == 3) {
        Pallindrome();

    } else if(choice == 4) {
		PositveNeg();

    } else if(choice == 5) {
			Reverse();

    } else if(choice == 6) {
			SumOfDigits();

    } else {
        printf("Choice is invalid!\n");
    }
}//MenuDriven ends here
void EvenOdd(){
	int no;
	if(no % 2 == 0)
            printf("%d is even\n", no);
        else
            printf("%d is odd\n", no);
}
void Prime(){
	int i,no,isPrime;
	for(i = 2; i <= no / 2; i++) {
            if(no % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            printf("This is prime\n");
        else
            printf("This is not prime\n");
}
void Pallindrome(){
	int temp,no,rev,rem;
	temp = no;
        while(temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if(no == rev)
            printf("This is Palindrome number\n");
        else
            printf("This is not Palindrome number\n");
}
void PosNeg(){
	int no;
	    if(no > 0)
            printf("%d is positive number\n", no);
        else if(no < 0)
            printf("%d is negative number\n", no);
        else
            printf("Number is Zero\n");
}
void Reverse(){
	int temp,rev,rem,no;
	    temp = no;
        rev = 0;  
        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reverse of %d is %d\n", no, rev);
}
void SumOfDigits(){
	int temp,sum,rem,no;
	        temp = no;
        sum = 0;  
        while(temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits of %d is %d\n", no, sum);
}