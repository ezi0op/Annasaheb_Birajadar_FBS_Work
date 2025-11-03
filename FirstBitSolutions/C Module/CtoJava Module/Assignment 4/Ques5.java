import java.util.Scanner;
class Ques{ 
public static void main(String args[]){ 

	int no, choice, rem, rev = 0, sum = 0, temp, i, isPrime = 1;
	Scanner sc=new Scanner(System.in);

    System.out.printf("Enter a number: ");
    no=sc.nextInt();  

    System.out.printf("Enter 1 ---> Even or Odd\n");
    System.out.printf("Enter 2 ---> Prime\n");
    System.out.printf("Enter 3 ---> Palindrome\n");
    System.out.printf("Enter 4 ---> Positive, Negative or Zero\n");
    System.out.printf("Enter 5 ---> Reverse\n");
    System.out.printf("Enter 6 ---> Sum of Digits\n");

    System.out.printf("Enter your choice: ");
    choice=sc.nextInt();   

    if(choice == 1) {
        if(no % 2 == 0)
            System.out.printf("%d is even\n", no);
        else
            System.out.printf("%d is odd\n", no);

    } else if(choice == 2) {
        for(i = 2; i <= no / 2; i++) {
            if(no % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            System.out.printf("This is prime\n");
        else
            System.out.printf("This is not prime\n");

    } else if(choice == 3) {
        temp = no;
        while(temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if(no == rev)
            System.out.printf("This is Palindrome number\n");
        else
            System.out.printf("This is not Palindrome number\n");

    } else if(choice == 4) {
        if(no > 0)
            System.out.printf("%d is positive number\n", no);
        else if(no < 0)
            System.out.printf("%d is negative number\n", no);
        else
           System.out.printf("Number is Zero\n");

    } else if(choice == 5) {
        temp = no;
        rev = 0;  
        while(temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        System.out.printf("Reverse of %d is %d\n", no, rev);

    } else if(choice == 6) {
        temp = no;
        sum = 0;  
        while(temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        System.out.printf("Sum of digits of %d is %d\n", no, sum);

    } else {
        System.out.printf("Choice is invalid!\n");
    }
}
 }