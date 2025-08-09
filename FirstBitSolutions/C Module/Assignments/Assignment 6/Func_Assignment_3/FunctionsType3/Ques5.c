//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void Armstrong(int,int,int,int,int);//Declaration
void main()
{
	int n=153,no,rem,sum;
	int temp = sum = 0;
	Armstrong(n,no,rem,sum,temp);//Call		
}//main ends here
void Armstrong(int a,int b,int c,int d,int e){

	
	while(b>0){
		c = b%10;
		b = b / 10;
		d = d + c*c*c;

	}
	if(e == d){
		printf("This is Armstrong number");
	}else{
		printf("This is not Armstrong number");
	}
}//Armstrong ends here
