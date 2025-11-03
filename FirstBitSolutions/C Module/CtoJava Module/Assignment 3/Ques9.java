class Ques{ 
public static void main(String args[]){ 

	int no=689,rem,rev=0;
	int temp = no;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		rev = rev*10+rem;

	}
	if(temp == rev){
		System.out.printf("This is Palindrome number");
	}else{
		System.out.printf("This is not Palindrome number");
	}
}
 }