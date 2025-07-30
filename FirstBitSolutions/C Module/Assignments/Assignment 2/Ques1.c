//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>
void main(){
	int a,b;
	double result;
	char operator;
	
	printf("Enter first numbers: ");
	scanf("%lf",&a);
	
	printf("Enter a operator (+,-,/,*,%): ");
	scanf(" %c",&operator);
	
	printf("Enter second numbers: ");
	scanf("%lf",&b);
	
	if(operator == '+'){
		result=a+b;
		printf("Result:%lf",result);
	}else if(operator == '-'){
		result=a-b;
		printf("Result:%lf",result);
	}else if (operator == '/'){
		if(b!=0){
			result=a/b;
			printf("Result:%lf",result);
		}else{
			printf("Division by zero is not allowed.\n");
		}
	}else if(operator == "%"){
		if(b !=0){
			result = (int)a%(int)b;
			printf("Result:%lf",result);
		}else{
			printf("Modulo  is not allowed.\n");
		}
	}else{
		printf("Invalid syntax is Entered:\n");
	}
}