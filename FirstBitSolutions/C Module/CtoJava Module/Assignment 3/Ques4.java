import java.util.Scanner;
class Ques{ 
public static void main(String args[]){ 
	int no,isPrime =1,i;
	Scanner sc=new Scanner(System.in);
	System.out.printf("Enter a number:");
	no=sc.nextInt();
	for(i=2; i<=no/2; i++) {
		if(no%i==0) {
			isPrime=0;
			break;
		}	
	}
	if(isPrime==1) {
		System.out.printf("This is  prime");
	} else {
		System.out.printf("This is not prime");
	}

 }
}