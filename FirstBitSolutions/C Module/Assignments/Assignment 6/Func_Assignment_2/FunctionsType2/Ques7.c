//7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include <stdio.h>
int Age();//Declaration
void main() {
	int res=Age();//Call
	if(res==1){
		printf("The person is Child");
	}else if(res==2){
		printf("The person is Teenager");
	}else if(res==3){
		printf("The person is Adult");
	}else if(res==4){
		printf("The person is Senior");
	}else{
		printf("Invalid age");
	}
}//main ends here
int Age() {
	int age;
	age = 10;

	if(age < 12) {
		return 1;
	} else if(age >= 12 && age <= 19) {
		return 2;
	} else if(age >= 20 && age<= 59) {
		return 3;
	} else if(age >= 60) {
		return 4;
	} else {
		return 5;
	}
}//Age ends here
