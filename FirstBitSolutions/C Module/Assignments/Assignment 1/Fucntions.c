////1. Write a program to check whether a number is even or odd.
#include <stdio.h>
void EvenOdd();//Declaration
void main(){
	EvenOdd();//Call
}//main ends here
void EvenOdd(){
		int a=7;
	if(a%2==0)
	{
		printf("a is even");	
	}
	else
	{
		printf("a is odd");
	}
}//EvenOdd ends here

//2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void Pallindrome();//Declaration
void main(){
	Pallindrome();
}//main ends here
void Pallindrome(){
		int n=141;
	int fd=n/100;
	int ld=n%10;
	if(fd==ld){
		printf("%d and %d Pallindrome",fd,ld);
	}else{
		printf("%d and %d not Pallindrome",fd,ld);
	}
}//Pallindrome ends here

//3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
void LeapYear();//Declaration
void main()
{
  LeapYear();//Call
}//Main ends here
void LeapYear(){
		int year;
	year =  2020;
	
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("It is leaf Year");
	}
	else
	{
		printf("It is not leaf Year");
	}
}//LeapYear ends here

//4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
void VowelConsonant();//Declaration
void main()
{
 VowelConsonant();//Call
}//main ends here
void VowelConsonant(){
		char ch = 'b';
	if(ch== 'a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u' ||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U')
	{
		printf("The character is vowel");
	}
	else
	{
		printf("The character is consonant");
	}
}//VowelConsonant ends here

//5. Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
void vote();//Declaration
void main()
{
	Vote();//Call
}//main ends here
void Vote(){
		int age = 20;
	
	if(age >= 18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not Eligible to vote");
	}
}//Vote ends here

//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
void Character();//Declaration
void main()
{
 Character();//Call
}//main ends here
void Character(){
	char ch = 'a';
 	
 	if(ch >= 'A'&& ch <= 'Z')
 	{
 		printf("Its is uppercase character");	
	}
	else
	{
		printf("Its is lowercase character");
	}
}//Character ends here

//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include <stdio.h>
void BasicSalary();//Declaration
void main()
{
 BasicSalary();//Call
}//main ends here
void BasicSalary(){
		double bs = 5000;
	double da,ta,hra,TS;
	
	if(bs < 5000)
	{	
		da = bs *0.10;
		ta = bs *0.15;
		hra = bs*0.20;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
	else
	{
		da = bs *0.15;
		ta = bs *0.25;
		hra = bs*0.30;
		TS = da+ta+hra;
		printf("Total Salaray will be %lf", TS);
	}
}//BasicSalary ends here