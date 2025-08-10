//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>
int Opr();//Declaration
void main(){
 	int result=Opr();//Call
 		printf("Result:%d",result);
}//main ends here
int Opr(){
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
		return result;
	}else if(opr == '-'){
		result=a-b;
		return result;
	}else if (opr == '/'){
		if(b!=0){
			result=a/b;
			return result;
		}else{
			printf("Division by zero is not allowed.\n");
		}
	}else if(opr == '%'){
		if(b !=0){
			result = (int)a%(int)b;
			return result;
		}else{
			printf("Modulo  is not allowed.\n");
		}
	}else{
		printf("Invalid syntax is Entered:\n");
	}
}//Opr ends here
