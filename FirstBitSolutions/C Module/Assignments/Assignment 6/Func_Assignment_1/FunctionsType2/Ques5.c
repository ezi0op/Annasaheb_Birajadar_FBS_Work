//5. Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>
int Vote();//Declaration
void main()
{
	int res=Vote();//Call
	if(res==1)
		printf("Eligible to vote");
	else
		printf("Not Eligible to vote");
}//main ends here
int Vote(){
	int age = 20;
	if(age >= 18)
		return 1;
	else
		return 0;
}//Vote ends here
