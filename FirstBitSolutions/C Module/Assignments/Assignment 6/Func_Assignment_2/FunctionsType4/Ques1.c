//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>
int Calculator(int,int,char);//Declaration
void main(){
	int n1,n2;
	char opr;

	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);

	printf("Enter a operator (+,-,/,*,%): ");
	scanf(" %c",&opr);

 	int res=Calculator(n1,n2,opr);//Call
 		printf("Result=%d",res);
}//main ends here
int Calculator(int a,int b,char c){


	if(c == '+'){
		return a+b;
	}else if(c == '-'){
		return a-b;
	}else if(c == '*'){
		return a*b;
	}else if (c == '/'){
			return a/b;
	}else if(c == '%'){	
			return a%b;
	}else{
		printf("Invalid Operator:\n");
	}
}//Opr ends here