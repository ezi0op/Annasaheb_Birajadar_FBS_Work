class Ques{ 
public static void main(String args[]){ 

	int n=188;
	int i =n,fact=1;
	int temp=0,sum;
	while(i>n){
		fact = fact * i;
		temp = fact;
		i--;
		
	}
	sum = fact + temp;
	if(sum == n)
		System.out.printf("It is strong");
	else
		System.out.printf("It is not strong");
 }
}