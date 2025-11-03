class Ques{ 
public static void main(String args[]){ 

	int n,sum,i;
	i = 1;
	n = 28;
	sum = 0;
	
	while(i<n){
		if(n%i==0){
			sum +=i;
		}	
		i++;
	}
	if(sum==n){
		System.out.printf("%d is Perfect number",n);
	}else{
		System.out.printf("%d is not Perfect number",n);	
	}
 }
}