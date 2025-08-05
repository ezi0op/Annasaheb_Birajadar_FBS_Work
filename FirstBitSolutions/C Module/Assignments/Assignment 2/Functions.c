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

//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
void Triangle();//Declaration
void main()
{
	Triangle();//Call

}//main ends here
void Triangle(){
	int sides1,sides2,sides3;

	sides1 = 20;
	sides2 = 30;
	sides3 = 40;

	if(sides1 == sides2 && sides2 == sides3){
		printf("This is an equilateral triangle");
	}
	else if(sides1 == sides2 || sides3 == sides1 || sides1==sides3){
			printf("This is an  isoceles triangle");
		}
		else if{
			printf("This is an  scalene triangle");
		}
}//Triangle ends here

//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void Greatest();//Declaration
void main() {
	Greatest();//Call
}//main ends here
void Greatest() {
	int a,b,c;

	a=80;
	b=20;
	c=30;

	if(a>b) {
		if(a>c) {
			printf("a is greater");
		} else {
			printf("c is greater");
		}
	} else {
		if(b>c) {
			printf("a is greater");
		} else {
			printf("c is greater");
		}
	}
}//Greatest ends here

//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include <stdio.h>
void Marks();//Declaration
void main() {
	Marks();//Call
}//main ends here
void Marks() {
	int marks=65;

	if(marks>=75) {
		printf("Distinction");
	} else {
		if(marks>=65) {
			printf("First Class");
		} else {
			if(marks>=55) {
				printf("Second Class");

			} else {
				if(marks>=40) {
					printf("Pass");
				} else {
					printf("Fail");
				}
			}
		}
	}
}//Marks ends here

//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include <stdio.h>
void Discount();//Declaration
void main() {
	Discount();//Call
}//main ends here
void Discount() {

	double price,Tprice,discount;
	char isstudent = 'Y';
	price = 400;
	discount = 0 ;
	if(isstudent == 'Y') {
		if(price>500) {
			discount = price*0.20;
			Tprice = price-discount;
		} else {
			Tprice = price - price * 0.10;
		}
	} else {
		if(price>600) {
			discount = price*0.20;
			Tprice = price-discount;
		} else {
			Tprice = price;
		}
	}
	if(discount == 0) {
		printf("Final Price of the Customer  will be %lf",Tprice);
	} else {
		printf("Final Price of the Customer with %lf discount will be %lf",Tprice,discount);
	}
}//Discount ends here

//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

#include <stdio.h>
void Divisible();//Declaration
void main() {
	Divisible();//Call
}//main ends here
void Divisible() {
	int no=8;

	if(no%3==0&&no%5==0) {
		printf("Divisible by both");
	}	else if(no%3==0&&no%5!=0) {
		printf("Divisible by 3 but not by 5");
	}	else if(no%3!=0&&no%5==0) {
		printf("Divisible by 5 but not by 3");
	} else {
		printf("Divisible by None");
	}
}//Divisible ends here

//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include <stdio.h>
void Age();//Declaration
void main() {
	Age();//Call
}//main ends here
void Age() {
	int age;
	age = 10;

	if(age < 12) {
		printf("The person is Child");
	} else if(age >= 12 && age <= 19) {
		printf("The person is Teenager");
	} else if(age >= 20 && age<= 59) {
		printf("The person is Adult");
	} else if(age >= 60) {
		printf("The person is Senior");
	} else {
		printf("Invalid age");
	}
}//Age ends here







