class Ques{ 
public static void main(String args[]){ 

	int n=5;
	int i =n,factorial=1;
	while(i>1){
		factorial = factorial* i;
		i--;
		
	}
	System.out.printf("%d is Factorial number %d",n,factorial);
 }
}