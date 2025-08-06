//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

#include <stdio.h>
int Divisible();//Declaration
void main() {
	int res=Divisible();//Call
	if(res==1){
		printf("Divisible by both");
	}else if(res==2){
		printf("Divisible by 3 but not by 5");
	}else if(res==3){
		printf("Divisible by 5 but not by 3");
	}else{
		printf("Divisible by None");
	}
}//main ends here
int Divisible() {
	int no=8;

	if(no%3==0&&no%5==0) {
		return 1;
	}	else if(no%3==0&&no%5!=0) {
		return 2;
	}	else if(no%3!=0&&no%5==0) {
		return 3;
	} else {
		return 0;
	}
}//Divisible ends here
