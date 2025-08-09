//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>
void Opr();//Declaration
void main(){
 	Opr();//Call
}//main ends here
void Opr(){
	int a,b;
	int result;
	char opr;

	printf("Enter first numbers: ");
	scanf("%d",&a);

	printf("Enter a operator (+,-,/,*,%): ");
	scanf(" %c",&opr);

	printf("Enter second numbers: ");
	scanf("%d",&b);

	if(opr == '+'){
		result=a+b;
		printf("Result:%d",result);
	}else if(opr == '-'){
		result=a-b;
		printf("Result:%d",result);
	}else if (opr == '/'){
		if(b!=0){
			result=a/b;
			printf("Result:%d",result);
		}else{
			printf("Division by zero is not allowed.\n");
		}
	}else if(opr == '%'){
		if(b !=0){
			result = (int)a%(int)b;
			printf("Result:%d",result);
		}else{
			printf("Modulo  is not allowed.\n");
		}
	}else{
		printf("Invalid syntax is Entered:\n");
	}
}//Opr ends here