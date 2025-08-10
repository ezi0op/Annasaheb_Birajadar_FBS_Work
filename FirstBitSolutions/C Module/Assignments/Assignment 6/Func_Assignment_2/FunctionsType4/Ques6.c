//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

#include <stdio.h>
int Divisible(int);//Declaration
void main() {
	int no=8;
	int res=Divisible(no);//Call
		if(res==0) 
		printf("Divisible by both");
		else if(res==1) 
		printf("Divisible by 3 but not by 5");
		else if(res==02) 
		printf("Divisible by 5 but not by 3");
	else 
		printf("Divisible by None");
	
}//main ends here
int Divisible(int b) {
	

	if(b%3==0&&b%5==0) {
		return 0;
	}	else if(b%3==0&&b%5!=0) {
		return 1;
	}	else if(b%3!=0&&b%5==0) {
		return 2;
	} else {
		return 3;
	}
}//Divisible ends here