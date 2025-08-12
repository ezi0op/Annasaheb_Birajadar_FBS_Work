//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include <stdio.h>
void Age(int*);//Declaration
void main() {
	int age = 10;
	Age(&age);//Call
}//main ends here
void Age(int* b) {


	if(*b < 12)
		printf("The person is Child");
	else if(*b >= 12 && *b <= 19)
		printf("The person is Teenager");
	else if(*b >= 20 && *b<= 59)
		printf("The person is Adult");
	else if(*b >= 60)
		printf("The person is Senior");
	else
		printf("Invalid age");

}//Age ends here