class Ques{ 
public static void main(String args[]){ 

	int no = 12345;
	int ld,sum;

	ld = no % 10;
	
	while(no>=10){
		no = no /10;

	}
	sum = ld + no;
	System.out.printf("Sum of first and last digit of given number is %d",sum);
 }
}