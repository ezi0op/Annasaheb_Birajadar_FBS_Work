//5. Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
int vote(int);//Declaration
void main()
{	
	int age = 20;
	int res=Vote(age);//Call
	if(res)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not Eligible to vote");
	}
}//main ends here
int Vote(int a){
		
	return a >= 18;

}//Vote ends here
