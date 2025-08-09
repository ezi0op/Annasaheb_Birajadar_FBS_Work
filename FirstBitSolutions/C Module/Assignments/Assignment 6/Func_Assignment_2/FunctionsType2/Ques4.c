//4. Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include <stdio.h>
int Marks();//Declaration
void main() {
	int res=Marks();//Call
	if(res==1){
		printf("Distinction");
	}else if(res==2){
		printf("First Class");
	}else if(res==3){
		printf("Second Class");
	}else if(res==4){
		printf("Pass");
	}else{
		printf("Fail");
	}
}//main ends here
int Marks() {
	int marks=65;

	if(marks>=75) {
		return 1;
	} else {
		if(marks>=65) {
			return 2;
		} else {
			if(marks>=55) {
				return 3;
			} else {
				if(marks>=40) {
					return 4;
				} else {
					return 0;
				}
			}
		}
	}
}//Marks ends here