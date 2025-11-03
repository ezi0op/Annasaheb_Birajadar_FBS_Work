class Ques{

public static void main(String args[]){
	int n=141;
	int fd=n/100;
	int ld=n%10;
	if(fd==ld){
		System.out.printf("%d and %d Pallindrome",fd,ld);
	}else{
		System.out.printf("%d and %d not Pallindrome",fd,ld);
	}         }
}