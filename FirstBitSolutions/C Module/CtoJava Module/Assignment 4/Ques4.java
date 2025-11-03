class Ques{ 
public static void main(String args[]){ 
		for(int k=1; k<=6000000; k++) {
		int n=k,i;
		int temp=n,sum=0;
		while(temp > 0) {
			int digit = temp % 10;
			int fact = 1;

			for(i=1; i<=digit; i++) {
				fact = fact * i;

			}
			sum += fact;
			temp = temp / 10;
		}
		if(sum == n)
			System.out.printf("%d is strong\n",n);
	}
}
 }