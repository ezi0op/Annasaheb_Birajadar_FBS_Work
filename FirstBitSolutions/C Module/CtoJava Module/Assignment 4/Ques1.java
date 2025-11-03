class Ques{ 
public static void main(String args[]){ 
for(int k=1; k<=10000; k++) {
		int num=k,r,sum=0,temp=num,p,i;
		int count=0;
		while(temp!=0) {
			count++;
			temp=temp/10;
		}
		temp=num;
		while(temp!=0) {
			r=temp%10;
			p=1;
			for(i=1; i<=count; i++) {
				p=p*r;
			}
			sum=sum+p;
			temp=temp/10;
		}
		if(num==sum) {
			System.out.printf("%d is Armstrong\n",num);
		}

	}
}
 }