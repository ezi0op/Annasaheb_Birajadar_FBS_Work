//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.


#include <stdio.h>

void main()
{
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
        if(no % 2 == 0)
            printf("%d is even\n", no);
        else
            printf("%d is odd\n", no);

    } else if(choice == 2) {
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

    } else if(choice == 3) {
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

    } else if(choice == 4) {
        if(no > 0)
            printf("%d is positive number\n", no);
        else if(no < 0)
            printf("%d is negative number\n", no);
        else
            printf("Number is Zero\n");

    } else if(choice == 5) {
        temp = no;
        rev = 0;  
        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reverse of %d is %d\n", no, rev);

    } else if(choice == 6) {
        temp = no;
        sum = 0;  
        while(temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits of %d is %d\n", no, sum);

    } else {
        printf("Choice is invalid!\n");
    }
}
