//5. Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
void vote(int);//Declaration
void main()
{	
	int age = 20;
	Vote(age);//Call
}//main ends here
void Vote(int a){
		
	
	if(a >= 18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not Eligible to vote");
	}
}//Vote ends here
