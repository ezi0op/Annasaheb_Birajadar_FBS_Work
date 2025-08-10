//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>
void Opr(int,char,int,int);//Declaration
void main(){
	int a,b;
	int result;
	char opr;

	printf("Enter first numbers: ");
	scanf("%d",&a);

	printf("Enter a operator (+,-,/,*,%): ");
	scanf(" %c",&opr);

	printf("Enter second numbers: ");
	scanf("%d",&b);
 	Opr(a,opr,result,b);//Call
}//main ends here
void Opr(int f,char g,int j,int i){


	if(g == '+'){
		j=f+i;
		printf("Result:%d",j);
	}else if(g == '-'){
		j=f-i;
		printf("Result:%d",j);
	}else if (g == '/'){
		if(i!=0){
			j=f/i;
			printf("Result:%d",j);
		}else{
			printf("Division by zero is not allowed.\n");
		}
	}else if(g == '%'){
		if(i !=0){
			j = (int)f%(int)i;
			printf("Result:%d",j);
		}else{
			printf("Modulo  is not allowed.\n");
		}
	}else{
		printf("Invalid syntax is Entered:\n");
	}
}//Opr ends here