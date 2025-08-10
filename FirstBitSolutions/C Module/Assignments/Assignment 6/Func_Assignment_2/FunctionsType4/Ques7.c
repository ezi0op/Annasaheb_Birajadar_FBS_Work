//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include <stdio.h>
int Age(int);//Declaration
void main() {
	int age;
	age = 10;
	int res=Age(age);//Call
	if(res) {
		printf("The person is Child");
	} else if(res >= 12 && res <= 19) {
		printf("The person is Teenager");
	} else if(res >= 20 && res<= 59) {
		printf("The person is Adult");
	} else if(res >= 60) {
		printf("The person is Senior");
	} else {
		printf("Invalid age");
	}
}//main ends here
int Age(int b) {
	return b < 12;

}//Age ends here