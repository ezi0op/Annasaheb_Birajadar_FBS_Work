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
