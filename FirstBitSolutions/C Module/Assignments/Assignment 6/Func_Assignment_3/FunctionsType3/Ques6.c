//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void Perfect(int,int,int);//Declaration
void main()
{	int n,sum,i;
	i = 1;
	n = 28;
	sum = 0;
	Perfect(n,sum,i);//Call
}//main ends here
void Perfect(int a,int b,int c){
	
	while(c<a){
		if(a%c==0){
			b +=c;
		}	
		c++;
	}
	if(b==a){
		printf("%d is Perfect number",a);
	}else{
		printf("%d is not Perfect number",a);	
	}	
}//Perfect ends here