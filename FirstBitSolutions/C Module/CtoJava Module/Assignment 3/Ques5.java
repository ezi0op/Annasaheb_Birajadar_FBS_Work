class Ques{ 
public static void main(String args[]){ 

	int no=153;
	int rem,sum;
	int temp = sum = 0;
	
	while(no>0){
		rem = no%10;
		no = no / 10;
		sum = sum + rem*rem*rem;

	}
	if(temp == sum){
		System.out.printf("This is Armstrong number");
	}else{
		System.out.printf("This is not Armstrong number");
	}
 }
}