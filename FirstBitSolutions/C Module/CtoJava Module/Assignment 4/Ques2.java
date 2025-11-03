class Ques{ 
public static void main(String args[]){ 
for(int k=1; k<=5000; k++) {
		int no=k;
		int prime =1,i;
		int temp=no;

		for(i=2; i<=no/2; i++) {
			if(no%i==0) {
				prime=0;
				break;
			}
		}
		if(prime==1 && no !=1) {
			System.out.printf("%d is  prime\n",temp);
		}
	}
}
 }