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