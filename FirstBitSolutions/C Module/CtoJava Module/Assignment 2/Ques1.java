import java.util.Scanner;
class Ques{ 
public static void main(String args[]){ 
	Scanner sc= new Scanner(System.in);
	int a,b;
	double result;
	char operator;

	System.out.print("Enter first numbers: ");
	a=sc.nextInt();

	System.out.print("Enter a operator (+,-,/,*,%): ");
	operator=sc.next().charAt(0);

	System.out.print("Enter second numbers: ");
	b=sc.nextInt();

	if(operator == '+') {
		result=a+b;
		System.out.printf("Result:%f",result);
	} else if(operator == '-') {
		result=a-b;
		System.out.printf("Result:%f",result);
	} else if (operator == '/') {
		if(b!=0) {
			result=a/b;
			System.out.printf("Result:%f",result);
		} else {
			System.out.printf("Division by zero is not allowed.\n");
		}
	} else if(operator == '%') {
		if(b !=0) {
			result = (int)a%(int)b;
			System.out.printf("Result:%f",result);
		} else {
			System.out.printf("Modulo  is not allowed.\n");
		}
	} else {
		System.out.printf("Invalid syntax is Entered:\n");
	}
	 }
 }